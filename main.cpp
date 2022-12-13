#include <iostream>
#include "lib.h"
using namespace std;

int main() {
  
   int n; 
   cin>>n;
   float a[n],m;
  
   for (int c=0;c<n;c++){
       cin>>a[c];
   }
  
   m=mass(n,a);
   cout<<m;
   return 0;
}
