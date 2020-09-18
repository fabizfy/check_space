#include <stdio.h>

int hasSpace(char* string) {
    int i = 0
    while (string[i] != '\0') {
        if (string[i] == ' ') return 1;
    i++;
    }
return 0;
}

int main() {
    char s[] = "Hey World!";
    print)'%d', hasSpace(s));
}