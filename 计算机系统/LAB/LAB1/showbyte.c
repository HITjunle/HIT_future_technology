#include<stdio.h>
int main(){
    FILE *fp = fopen("hello.c","r");
    if (fp==NULL)
    {
        printf("文件不存在");
    }
    char buffer[16];
    int count = 0;
    while (1)
    {
        int ch = fgetc(fp);
        if (ch==EOF)
        {
            break;
        }
        else{

            buffer[count] = ch;
            if (ch=='\n')
            {
            printf("  \\n ");
            }
            else if (ch==' ')
            {
                printf("  SP");
            }

            else
            printf("%4c",(char)ch);
            count++;
            if (count==15)
            {
                printf("\n");
                for (int i = 0; i < 15; i++)
            {
                printf("%4d",buffer[i]);
            }
                count = 0;
                printf("\n");
            }
        }

    }
    if (count>0)
    {
        printf("\n");
        for (int i = 0; i < count; i++)
            {
                printf("%4d",buffer[i]);
            }
    }



}
