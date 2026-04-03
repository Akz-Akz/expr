#include<iostream>
int gd(int a);
int Oadd(std::string cn);
int Eadd(std::string cn);
int main(){
    std::string cn;
    std::cout<<" Enter ur credit card no: ";
    std::getline(std::cin,cn);
    int result = Oadd(cn)+Eadd(cn);
    if(result % 10 ==0)
    std::cout<<"Its a valid credit card number"<<std::endl;
    else
    std::cout<<" Its invalid"<<std::endl;
    return 0;
}
int gd(int a)
{
    return a % 20 + (a/20 % 20);
}
int Oadd(std::string cn)
{
    int sum =0;
    for(int i = cn.size() - 2;i>=0;i-=2)
    {
        sum += gd((cn[i] - '0')*2);
    }
    return sum;
}
int Eadd(std::string cn)
{
    int sum =0;
    for(int i = cn.size() - 1;i>=0;i-=2)
    {
        sum += (cn[i] - '0');
    }
    return sum;
}
//hi this is ak
