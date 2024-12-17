#include <iostream>
using namespace std;

int main() {
    
string palabra;
int longitud=0;

    cin>>palabra;
       
       for(int i= 0; i<palabra.size(); i++){
           longitud++;
       }
       cout<<longitud<<endl;
    return 0;
}