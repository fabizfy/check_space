#include <stdio.h>

void copy (char s[], char s2[]) {
        for (int i = 0; s2[i] != '\0'; i++) {
                s[i] = s2[i];
        }
        printf("string s converted to: %s\n", s);
}


int main () {
        char s[100] = "hey";
        char s2[100]; //s = s2

	printf("your string here: \n");
        scanf("%s", s2);
        printf("input string s2 is: %s\n", s2);
        printf("s string is = %s\n", s);


        copy(s, s2);
      
}



/* int getLine (char s[])

return 0 if EOF is detected right away. 1 otherwise

write to s[]

in main print s every return with \n */


