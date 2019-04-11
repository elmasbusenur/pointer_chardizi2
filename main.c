#include <stdio.h>

int main() {
    int i,j;
    char *ilkbaharaylar[3]={"mart","nisan","mayis"}; //3 elemanlı ilkbaharaylar dizisi
    char *yazaylar[3]={"haziran","temmuz","agustos"};
    char *sonbaharaylar[3]={"eylül","ekim","kasım"};
    char *kisaylar[3]={"aralik","ocak","subat"};

    char **table[4]; //diziyi tutan pointeri tutan pointer
    table[0]=ilkbaharaylar;//table ın 0. elemanına ilkbaharaylar dizisini atıyor
    table[1]=yazaylar;
    table[2]=sonbaharaylar;
    table[3]=kisaylar;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%s\t", table[i][j]);
        }

    }
    printf("%s\n", table[i][j]);
    getchar();
    return 0;
}