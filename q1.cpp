#include <iostream>
using namespace std;

int sumsquares_list(int ar[6]) {
  int sum=0;
  for (int i=0; i<6; i++){
    sum =sum+(ar[i]* ar[i]);
  }
  return sum;
}

int main() {

int ar[6];
cout<<"Type 6 numbers using enter"<<endl;
cin>>ar[0];
cin>>ar[1];
cin>>ar[2];
cin>>ar[3];
cin>>ar[4];
cin>>ar[5];

cout<< sumsquares_list(ar)<<endl;
return 0;
}
