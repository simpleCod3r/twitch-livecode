#include <string.h>
#include <iostream>

using namespace std;

void mergesort (int p, int r, char* v);
void intercala (int p, int q, int r, char* v);

int main(){
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);
    mergesort(0, strlen(s), s);
    cout << "String ordenada: " << s << endl;
    return 0;
}

void intercala (int p, int q, int r, char* v){
   int i, j, k, *w;
   w = new int[r-p];
   i = p; j = q;
   k = 0;
   while (i < q && j < r) {
      if (v[i] <= v[j])  w[k++] = v[i++];
      else  w[k++] = v[j++];
   }
   while (i < q)  w[k++] = v[i++];
   while (j < r)  w[k++] = v[j++];
   for (i = p; i < r; ++i)  v[i] = w[i-p];
   delete [] w;
}


void mergesort (int p, int r, char* v){
   if (p < r-1) {
      int q = (p + r)/2;
      mergesort (p, q, v);
      mergesort (q, r, v);
      intercala (p, q, r, v);
   }
}