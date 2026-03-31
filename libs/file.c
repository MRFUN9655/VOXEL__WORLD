




//importers
#include<stdio.h>
#include"file.h"
//funcs

void read(const char* fileaddr,summa *hi){//change here
    FILE *f = fopen(fileaddr,"rb");
    fread(hi, sizeof(summa), 1, f);//change here
    fclose(f);
}
void write(const char* fileaddr,summa *hi){//change here
    FILE *f=fopen(fileaddr,"wb");
    fwrite(hi,sizeof(summa),1,f);//change here
    fclose(f);
}
