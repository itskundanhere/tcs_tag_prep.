#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
    return a;
    return gcd(b, a%b);
}

void simplify(int &num, int &den){
    int g = gcd(num, den);
    num = num/g;
    den = den/g;

}
int main()
{
   int num1, den1, num2, den2;
   int num3, den3;

   cout<<"Enter numerator and denominator of first fraction: ";
   cin>>num1>>den1;

   cout<<"Enter numerator and denominator of second fraction: ";
   cin>>num2>>den2;

   //lcm of the denominator 
   int lcm = (den1*den2)/gcd(den1, den2);

   //result denominator

   den3 = lcm;

   //result numerator
   num3 = num1*(den3/den1) + num2*(den3/den2);

   //simplify the result

simplify(num3, den3);

cout<<"The addition of two fraction is that: "
// <<num1<<"/"<<den1<<"+"
// <<num2<<"/"<<den2<<"="
<<num3<<"/"<<den3<<endl;

return 0;


}