//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
    int characters=0, words=0, lines=0, inWord=0;

fp=fopen("sample.txt","r");
    if(fp==NULL){
 printf("file doesn't exist\n");
return 1;}
while((ch=fgetc(fp))!=EOF){
        characters++;
 if(ch=='\n') lines++;
 if(ch==' '||ch=='\n'||ch=='\t') inWord=0;
        else if(inWord==0){inWord=1;
            words++; } }
 if(characters>0) lines++;
 fclose(fp);
 printf("Characters: %d\nWords: %d\nLines: %d\n",characters,words,lines);
    return 0;
}
