#include <stdio.h>
#include <stdlib.h>

int  main(){
    int c;
    FILE *src, *dst;
    src = fopen("src.txt", "r");

    if (src ==NULL){
        perror("src");
        fclose(src);
        exit(1);
    }
    dst = fopen("dst.txt","w+");
    if (dst ==NULL){
        perror("dst");
        fclose(dst);
        exit(1);
    }
    while ((c = fgetc(src)) != EOF)
        fputc(c, dst);
    fclose(src);
    fclose(dst);
}