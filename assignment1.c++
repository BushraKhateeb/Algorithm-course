#include<iostream>
#include<time.h>
 clock_t startTime;
 clock_t endTime;
using namespace std;
 long long IterativeFact (long long n){
  long long fact =1;
  for(long long i=1;i<=n;i++)
    fact*=i;
  return fact;
} // End Iterative Function
 long long RecursiveFact (long long n) {
     if(n==1 || n==0) {
         return 1;
     }
   else
     return n *RecursiveFact( n-1);
 } // End Recursive Function..

int main() {
 long long n;
    cout << "Enter positive number && not zero: " << endl;
    cin>> n;
    if(n<=0 )
       {cout<<"PLEASE ENTER POSITIVE NUMBER"<<endl;
           cin>>n;}
  else{ startTime=clock();

      //  long long Result = IterativeFact ( n) ;
     long long Result = RecursiveFact (n) ;
         endTime=clock();

    cout<<"---------------------------------------"<<endl;
    cout<<"RESULT OF FACTORIAL :"<<Result<<endl;
   long long t =  (((double)endTime - startTime)/ CLOCKS_PER_SEC);    
    t=t*1000000.000;
 cout<<"EXECUTION TIME IN MICROSECOND :"<< t<<endl;
    }
 return 0;
}