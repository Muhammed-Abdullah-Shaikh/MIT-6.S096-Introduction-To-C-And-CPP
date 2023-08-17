#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *str = (char *) malloc(15);
	strcpy(str, "hakuna matata!"); // this line should copy "hakuna matata!"
	                         // into our char array
	printf("%s\n", str);
	// free(str);
  return 0;
}

