#include <stdio.h>
#include <string.h>
int main() {
  char t[1000];
  char *copy();
  void reverse();
  copy("Hello world", t);
  printf("%s\n", t);
  reverse(t);
  printf("%s\n", t);
  reverse(copy("XY", t));
  printf("%s\n", t);
  reverse(copy("Even", t));
  printf("%s\n", t);
  reverse(copy("Odd", t));
  printf("%s\n", t);
  reverse(copy("civic", t));
  printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}

void reverse(t)
char t[];
{
    int left = 0;
    int right = strlen(t) - 1;
    while (left < right) {
        char temp = t[right];
        t[right] = t[left];
        t[left] = temp;
        left++;
        right--; 
    }
}

// void reverse(t)
// char t[];
// {
//     int j, length;
//     char new[1000];

//     j = 0;
//     length = strlen(t);
//     new[j] = '\0';

//     for (int i = length - 1; i > -1; --i) {
//         new[j] = t[i];
//         ++j;
//     }
//     return new;
// }