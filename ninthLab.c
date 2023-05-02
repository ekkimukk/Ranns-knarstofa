#include <stdio.h>
// #include <stdlib.h>
#include <malloc.h>
// #include <string.h>
// #define MAXLENGTH 129

// for (currentVowel; currentVowel<strlen(vowels); currentVowel++)

char **textArrayMalloc(int rowCount) {
    char **text = (char**)malloc(rowCount*sizeof(char*));
    for (int i=0; i<rowCount; i++) {
        text[i] = (char*)malloc(128*sizeof(char));
    }
    return text;
}


void textInput(int rowCount, char **text) {
    for (int i=0; i<rowCount; i++) {
        puts("Enter the line: ");
        gets(text[i]);
    }
}


void textProcessingAndOutput(int rowCount, char **text) {
    int vowelsCount=0, currentLine=0;

    for (currentLine; currentLine<rowCount; currentLine++){
        int currentLetter, lineLeight;
        lineLeight = strlen(text[currentLine]);
        
        for (currentLetter=0; currentLetter<lineLeight; currentLetter++) {
            if (text[currentLine][currentLetter]=='e' || text[currentLine][currentLetter]=='y' || text[currentLine][currentLetter]=='u' || text[currentLine][currentLetter]=='i' || text[currentLine][currentLetter]=='o' || text[currentLine][currentLetter]=='a')
                vowelsCount++;
        }
    printf("%s%d\n", text[currentLine], vowelsCount);
    vowelsCount=0;
    }
}


int main() {
    int rowCount;   

    printf("Enter the number of row: ");
    scanf("%d%*c", &rowCount);

    char **text = textArrayMalloc(rowCount);

    textInput(rowCount, text);
    textProcessingAndOutput(rowCount, text);

    return 0;
}
