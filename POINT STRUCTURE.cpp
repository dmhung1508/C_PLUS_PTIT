#include <bits/stdc++.h>
using namespace std;

struct Point {
double x,y;
};

double distance(Point A, Point B){
double x = A.x - B.x;
double y = A.y - B.y;
return sqrt(x*x + y *y);
}

void input(Point& p){
cin >> p.x >> p.y;
}

int main(){
int t;
cin >> t;
while(t--){
Point A, B;
input(A);
input(B);
cout << fixed << setprecision(4) << distance(A,B) << endl;
}
return 0;
}