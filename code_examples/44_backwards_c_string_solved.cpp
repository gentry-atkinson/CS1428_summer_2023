//Gentry
//October 19, 2021

#include<cstdio>
#include <cstring>


using namespace std;


//Use scanf to read a c-string
//https://www.cplusplus.com/reference/cstdio/scanf/
//Print it backwards using printf
//https://www.cplusplus.com/reference/cstdio/printf/

int main(){
    const int SIZE = 100;
    char word[SIZE];
    printf("Please type a word: ");
    scanf("%s", word);
    for(int i = strlen(word)-1; i>=0; i--){
        printf("%c", word[i]);
    }
    return 0;
}



