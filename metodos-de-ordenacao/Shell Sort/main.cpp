#include <string.h>
#include <iostream>

using namespace std;

void shell (char *item, int count);

int main(){
    char s[80];
    cout << "Digite uma string: ";
    cin.getline(s,80);
    shell(s, strlen(s));
    cout << "String ordenada: " << s << endl;
    return 0;
}

void shell (char *item, int count){
    int i, j, gap, k;
  char x, a[5];

  // Defininção do gap
  a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1;

  for (k=0; k < 5; k++){
      gap = a[k];
      for (i=gap; i<count; i++){
          x = item[i];
          for(j=i-gap; x<item[j] && j>=0; j=j-gap)
              item[j+gap] = item[j];
          item[j+gap] = x;
      }
  }
}