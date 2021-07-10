#include <string.h>
#include <iostream>

using namespace std;

void insertion(char *item, int count);

int main() {
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);
    insertion(s, strlen(s));
    cout << "String ordenada: " << s << endl;
    return 0;
}

void insertion(char *item, int count){
    int a, b;
    char t; 
    for ( a = 1; a < count; ++a){
        t = item[a];
        for (b = a - 1; b >= 0 && t < item[b]; b--){
            item[b+1] = item[b];
        }
        item[b+1] = t;
    }
}