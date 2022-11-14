#include <stdio.h>

int main(int argc, char*argv[])
{ 
    FILE* fp;
    int line = 0;
    int character = 0;
    int word = 0;
    int blank = 0;
    if(argc != 2) {
        printf("Usage︓./XXX YYY\n");
        return -1; }

    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("Can’t open the file \n");
        fclose(fp); git remote add origin https://github.com/STseungyeop/song.git
        return -1; }
    int ch;

    for(ch = fgetc(fp); ch != EOF; ch = fgetc(fp)){
        if(ch <= ' ') { // if something that is not a charactor
        if(ch == '\n') { line++; } // If a line break
        if(!blank){ word++; } // If it is not a blank
        blank = 1; }
        else{ // If it is a character
        if(ch == '.') word++; // Incase of stdio.h
        blank = 0; }
        character++; }
        printf ("Number of lines:% d ¥ n Single word:% d ¥ n Number of characters:% d ¥ n", line, word, character); 
        fclose(fp);
        return 0;
    }