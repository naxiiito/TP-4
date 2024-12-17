#include <iostream>
using namespace std;


int main() {
    
string palabra;
char letra;
int longitud=0;

    cin>>palabra;
    cin>>letra;
       
       for(int i= 0; i<palabra.size(); i++){
           if (palabra.at(i)==letra){
                longitud++;
           }
           
       }
       cout<<longitud<<endl;
    return 0;
}