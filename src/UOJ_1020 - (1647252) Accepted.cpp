#include <iostream>
using namespace std;

int main() {
  int a;
  cin>>a;
  cout <<a/365<<" ano(s)\n"<<(a%365)/30<<" mes(es)\n"<<(a%365)%30<<" dia(s)\n";
}
