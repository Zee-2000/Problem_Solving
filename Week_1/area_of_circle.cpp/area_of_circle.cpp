#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
double R = 0;
cin>> R;
const double PI = 3.141592653;
double area = PI * R * R;

cout<< area<<setprecision(9)<<endl;
return 0;
}
