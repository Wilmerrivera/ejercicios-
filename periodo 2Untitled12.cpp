#include <iostream>
using namespace std;

int main(){
 int numero[100];
 
 for(int i = 0; i < 100; i++){
  if(i % 3 == 0){ numero [i] = i; }
}
for(int i = 0; i < 100; i++){
 if(i % 3 == 0){ cout << numero [i] << endl; }
}
return 0;
}
