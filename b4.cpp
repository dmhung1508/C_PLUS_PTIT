#include <bits/stdc++.h>
using namespace std;
class Employee{
    public:
        string name,gen,date,add,tax,cont;
        void geti(){
            getline(cin,name);
            getline(cin,gen);
            getline(cin,date);
            getline(cin,add);
            getline(cin,tax);
            getline(cin,cont);
        }
};
bool comparedate(string a, string b){

}
int main(){
    Employee ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    SortingEmployees(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}