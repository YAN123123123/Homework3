#include <iostream>
using namespace std;
int main()
{
int a[10];
cout<<"请输入十个数："<<endl;
for(int i=0;i<10;i++)
{

cin>>a[i];
}
cout<<"输出的十个数："<<endl;
for(int i=9;i>=0;i--)
{
cout<<a[i]<<",";
}
cout<<endl;
//system("pause");
return 0;
}


