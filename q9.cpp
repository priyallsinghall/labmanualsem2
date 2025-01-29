#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{ 
  string c;
  int n;
  float f;
  cout<<"enter character: ";
  getline(cin,c);
  cout<<"enter number: ";
  cin>>n;
  cout<<"enter floating number: ";
  cin>>f;
  const int colWidth1 = 10;
  const int colWidth2 = 10;
  const int colWidth3 = 15;

    // Print table headers
    cout <<left << setw(colWidth1)<<"Char"
         <<setw(colWidth2)<<"Number"
         <<setw(colWidth3)<<"Float"<<endl;

    // Print rows
    cout <<left<<setw(colWidth1)<<c
         <<setw(colWidth2)<<n
         <<setw(colWidth3)<<f<< endl;

  return 0;
}
