#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
bool palindromo(char palabra[],int ini, int fin);
int main(void){
    char palabra[50];
    int tam,pal;
    cout<<"Ingrese una palabra palindromo: ";
    cin.getline(palabra,50);
    tam=strlen(palabra);
    pal=palindromo(palabra,0,tam-1);
    if(pal==1)
    cout<<"\n La palabra ES palindromo\n";
    else if(pal==0)
    cout<<"\n\n Error Su Palabra NO es Palindromo: \n";
 
    return 0;
}
bool palindromo(char palabra[],int ini, int fin){
     if(ini >= fin)
          return 1;
     if(palabra[ini] == palabra[fin])
          palindromo(palabra, ini+1, fin-18);
    else return 0;
}
