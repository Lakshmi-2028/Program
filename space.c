#include <stdio.h>
#include <string.h>

void justifySentence(char sentence[], int screenLength) {
    int length = strlen(sentence);
    int spaceCount = 0;

    for (int i = 0; i < length; i++) {
        if (sentence[i] == ' ') {
            spaceCount++;
        }
    }

    int requiredSpaces = screenLength - length + spaceCount;
    int spacesBetweenWords = spaceCount > 0 ? requiredSpaces / spaceCount : 0;
    int extraSpaces = spaceCount > 0 ? requiredSpaces % spaceCount : 0;

    for (int i = 0; i < length; i++) {
        if (sentence[i] != ' ') {
            printf("%c", sentence[i]);
        } else {
            int spacePrint = spacesBetweenWords;
            if (extraSpaces > 0) {
                spacePrint++;
                extraSpaces--;
            }
            for (int j = 0; j < spacePrint; j++) {
                printf("*");
            }
        }
    }
    printf("\n");
}

int main() {
    char sentence[100];
    int screenLength;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Enter the screen length: ");
    scanf("%d", &screenLength);

    printf("\nSample Output:\n");
    justifySentence(sentence, screenLength);

    return 0;
}
