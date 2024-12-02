#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    float a,b;
    public:
    void getdata()
    {
        cout<<"enter the value of a "<<endl;
        cin>>a;
          cout<<"enter the value of b "<<endl;
        cin>>b;

    }
    void display(void)
    {
        cout<<"The addition of a and b is"<<a+b<<endl;
        cout<<"The subtraction of a and b is"<<a-b<<endl;
        cout<<"The multiplication of a and b is"<<a*b<<endl;
        cout<<"The division of a and b is"<<a/b<<endl;
    }
};
class scientificcalculator
{
    float c,d;
    public:
    void getdata1()
    { 
        cout<<"enter the value of c "<<endl;
        cin>>c;
          cout<<"enter the value of d "<<endl;
        cin>>d;


    }
    void display1(void)
    {
        cout<<"the square root of c+d is"<<sqrt(c+d)<<endl;
        cout<<"the c raised power d is"<<pow(c,d)<<endl;
        cout<<"the log of c+d is"<<log(c+d)<<endl;
        cout<<"the exponential of c+d is"<<exp(c+d)<<endl;
    }
};
//multiple inheritance is used public mode of inheritance is used 
class hybridcalculator : public simplecalculator,public scientificcalculator
{
   
};
int main(){
    simplecalculator calc;
    calc.getdata();
    calc.display();
    scientificcalculator calc1;
    calc1.getdata1();
    calc1.display1();
    hybridcalculator hyb;
   hyb.getdata();
   hyb.display();
   hyb.getdata1();
   hyb.display1();
    return 0;
}