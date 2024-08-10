#include <iostream> 
#include <iomanip> 
using namespace std; 
const int N = 100; 
int main() 
{ 

 float alturas[N], media=0.0; 
 int i=0; 
 cout << setprecision(4); 
 do 
 { 
 cout << "Digite o valor de altura " << i+1 << " : "; 
 cin >> alturas[i]; 
 } while(alturas[i++]>=0.0); 
 i--; 
 
do 
 { 
 if( i>= N) 
 { 
 cout << "BUFFER LOTADO" << endl; 
 i++; 
 break;  
 } 
 cout << "Digite o valor de altura " << i+1 << " : "; 
 cin >> alturas[i]; 
 } while(alturas[i++]>=0.0); }
