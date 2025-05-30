#include <iostream>
using namespace std;

int main()
{
int passwd;
int fixed_passwd = 1999;
for(int i = 0; i <=passwd; ++i)
{
cin>> passwd;
if(passwd == fixed_passwd)
{
cout<< "Correct"<<endl;
}
else
{
cout<<"Wrong"<<endl;
}
}
return 0;
}
