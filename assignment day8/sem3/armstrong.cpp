#include<iostream>
using namespace std;
bool armstrong(int n){
    int org=n , dig;
     int sum=0;
    while (n>0)
    {
        dig=n%10;
        sum +=  dig*dig*dig;
        n/=10;
    }
   return sum == org;
} int main(){
    int n;
 cout<<"Enter a number:";
 cin>> n;
  
 if (armstrong(n)){
    cout<< n << "Armstrong";
 } else {
    cout<< n << "Not armstrong";
 }
 return 0;
}