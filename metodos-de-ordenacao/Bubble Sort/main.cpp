#include <string.h> 
#include <iostream>

using namespace std; 

void bubble(char *item, int count);

int main(){
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);

    bubble(s, strlen(s));

    cout << "String ordenada: " << s << endl;
    return 0;
}

void bubble(char *item, int count){
    int a, b; 
    char t;
    for (a=1; a < count; ++a){
        for (b=count-1; b>=a;b--){
            if(item[b-a] > item[b]){
                t = item[b-1];
                item[b-1]=item[b];
                item[b] = t;
            }
        }
    }
}