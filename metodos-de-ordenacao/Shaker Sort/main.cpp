#include <string.h>
#include <iostream>

using namespace std;

void shaker(char *item, int count);

int main(){
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);
    shaker(s, strlen(s));
    cout << "String ordenada: " << s << endl;
    return 0;
}

void shaker(char *item, int count){
    int a;
    char t;
    int change; 
    do { 
        change = 0;
        for (a = count - 1; a > 0; --a){
            if(item[a-1] > item[a]){
            t = item[a-1];
            item[a-1] = item[a];
            item[a] = t;
            change = 1;
            }
        }

        for (a = 1; a < count; a++){
            if(item[a-1] > item[a]){
            t = item[a-1];
            item[a-1] = item[a];
            item[a] = t;
            change = 1;
            }
        }
    } while (change);
}