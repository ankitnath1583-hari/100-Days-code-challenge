//Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[30];
    scanf("%[^\n]",str);
    int i=0;
    int size=0;
    while(str[i]!= '\0')
   {size++;
    i++;}
    for(int i=0;i<size;i++){
        if(str[i]==' '){
            str[i]='-';
        }
        printf("%c",str[i]);
    }
    return 0;
}