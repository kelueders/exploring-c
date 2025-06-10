#include <stdio.h>

int main() {
  	char line[1000];
    printf("Enter line\n");
  	scanf("%[^\n]1000s", line);   // scan up to the end of the line OR until you reach 1000 characters
  	printf("Line: %s\n", line);
}