#include <string.h>
#include <iostream>

using namespace std;

void selection (char *item, int count);

int main(){
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);
    selection(s, strlen(s));
    cout << "String ordenada: " << s << endl;
    return 0;
}

void selection (char *item, int count){
    int a, b, c;
    char t;
    int change;
    for (a = 0; a < count-1; ++a){
        change = 0;
        c = a;
        t = item[a];
        for (b = a + 1; b < count; ++b){
            if (item[b] < t){
                c = b;
                t = item[b];
                change = 1;
            }
        }
        if (change){
            item[c] = item[a];
            item[a] = t;
        }
    }
}