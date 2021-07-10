#include <string.h>
#include <iostream>

using namespace std;

void heapsort (char *item, int count);
void peneira (int p, int m, char* v);

int main(){
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);
    heapsort(s, strlen(s));
    cout << "String ordenada: " << s << endl;
    return 0;
}


void peneira (int p, int m, char* v){ 
   int x = v[p];
   while (2*p <= m) {
      int f = 2*p;
      if (f < m && v[f] < v[f+1])  ++f;
      if (x >= v[f]) break;
      v[p] = v[f];
      p = f;
   }
   v[p] = x;
}

void heapsort (char* v, int count){
   int p, m, x;
   for (p = count/2; p >= 0; --p)
      peneira (p, count, v);
   for (m = count; m >= 2; --m) {
      x = v[1], v[1] = v[m], v[m] = x;
      peneira (1, m-2, v);
   }
}