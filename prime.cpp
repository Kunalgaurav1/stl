#include<iostream>
using namespace std;

bool isPrime(int n){

    for (int i = 2 ;  i<n; i++){
        if(n % 2==0){
            return false;
        }
    }
    return true;
}
  
int main(){
   int n =12;

   bool ans = isPrime(n);

   if(n != 1 && ans==true){
    cout << "prime number";
   }
   else{
    cout << "non prime number " ;
   }
  
return 0;
}