#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
#include <string.h>
#define MAXLENGTH 256


int wordsQuantity(char *line) {
    int lineLeigth = strlen(line);
    int wordsCount = 0;

    int currentLetter;
    for (currentLetter=0; currentLetter<lineLeigth; currentLetter++) {
        if (line[currentLetter]==' ') {
            wordsCount++;
        }
    }
    wordsCount++;
    return wordsCount;
}


void fileReadingAndWriting() {
    FILE *fileInput = fopen("inputTextLab11.txt", "r");
    FILE *fileOutput = fopen("outputTextLab11.txt", "w");
    char text[MAXLENGTH];
    while ((fgets(text, MAXLENGTH, fileInput))!=NULL) {
        int wordsQuantityResult = wordsQuantity(text);
        fprintf(fileOutput, "%s%d", text, wordsQuantityResult);
    }
    fclose(fileInput);
    fclose(fileOutput);
}


int main() {
    fileReadingAndWriting();
    return 0;
}
