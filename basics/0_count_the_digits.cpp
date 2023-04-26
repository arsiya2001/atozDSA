
//count the digits of a number
//SOLUTION METHOD 1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;

  string x=to_string(n);
  cout<<x.length();
}



//SOLUTION METHOD 2

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int num=n;
 int c=0;
  while(num>0)
  {
  
   c++;
   num=num/10;
    
    }
cout<<c;
}
  

