#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 
int areAnagrams(char *s, char *t) {
    int count[MAX_CHAR] = {0};
    int i;
    if (strlen(s) != strlen(t))
        return 0;
    for (i = 0; s[i] && t[i]; i++) {
        count[s[i]]++;
        count[t[i]]--;
    }
    for (i = 0; i < MAX_CHAR; i++) {
        if (count[i] != 0)
            return 0;
    }
    return 1;
}
int main() {
    char s[100], t[100]; 

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}

