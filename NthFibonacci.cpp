#include<iostream>
using namespace std;

int fibno(int n){
  if (n<1){
    return -1;
  }
  else if(n==1){
    return 1;
  }
  else if(n==2){
    return 2;
  }
  else {
    int a=1;
    int b=1;
    int c;
      for(int i=3; i<n; i++){
          c=a+b;
          a=b;
          b=c;
        }
      return b;
      }
  }
int main() {
  int input;
  cin >> input;

  cout << fibno(n)<<"\n";
  return 0;
}
