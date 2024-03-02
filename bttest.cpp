#include <iostream>
#include <vector>
#include <string>

struct Champion {
    std::string name;
    int type, attack, defense, health, cost;
    double stat;
};

class ChampionCollection {
public:
    std::vector<Champion> champions;
    int num_champions, money_spent;

    void input() {
        std::cin >> num_champions >> money_spent;

        for (int i = 0; i < num_champions; i++) {
            Champion champ;
            std::cin >> champ.type >> champ.attack >> champ.defense;

            if (champ.type == 1) {
                champ.name = "Jarvan";
                champ.health = 1;
                champ.cost = 1;
            } else if (champ.type == 2) {
                champ.name = "Reksai";
                champ.health = 2;
                champ.cost = 2;
            } else if (champ.type == 3) {
                champ.name = "Sivir";
                champ.health = 0;
                champ.cost = 3;
            } else if (champ.type == 4) {
                champ.name = "Illaoi";
                champ.health = 3;
                champ.cost = 4;
            }

            champions.push_back(champ);
        }
    }

    void calculate_stats() {
        int type_count[5] = {0};
        int health_count[4] = {0};
        int cost_count[4] = {0}, total_cost_count[4] = {0};

        for (auto& champ : champions) {
            type_count[champ.type]++;
            health_count[champ.health]++;
            cost_count[champ.cost]++;
            total_cost_count[champ.cost] += champ.cost == 1 || champ.cost == 3 ? 1 : 0;
        }

        for (auto& champ : champions) {
            if (champ.cost == 1 || champ.cost == 3) {
                champ.attack += total_cost_count[1] >= 2 && total_cost_count[3] >= 2 ? 15 : 0;
                champ.defense += total_cost_count[1] >= 2 && total_cost_count[3] >= 2 ? 15 : 0;
            }

            if (champ.cost == 1 || champ.cost == 4 || champ.cost == 2) {
                champ.defense += health_count[3] >= 3 ? 30 : (health_count[3] >= 2 ? 15 : 0);
            }

            if (champ.cost == 2 || champ.cost == 4) {
                champ.attack += type_count[2] >= 2 && type_count[4] >= 2 ? 30 : 0;
            }
        }
    }

    void calculate_profit() {
        for (auto& champ : champions) {
            if (champ.cost == 1) {
                champ.stat = money_spent * champ.defense * 2.0f;
            } else if (champ.cost == 2) {
                champ.stat = champ.attack * 1.0f;
                int num_periods = money_spent / 4;
                int remainder = money_spent % 4;
                champ.stat *= num_periods * 4 + remainder;
            } else if (champ.cost == 3) {
                champ.stat = money_spent * champ.attack * 2.0f;
            } else if (champ.cost == 4) {
                champ.stat = money_spent * (champ.attack + champ.defense) / 2.0f;
            }
        }
    }

    void output() {
        for (auto& champ : champions) {
            std::cout << champ.name << " " << champ.attack << " " << champ.defense << " " << champ.stat << std::endl;
        }
    }
};

int main() {
    ChampionCollection collection;
    collection.input();
    collection.calculate_stats();
    collection.calculate_profit();
    collection.output();
    return 0;
}
