#include <stdio.h>
#include <stdlib.h>
int len(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i ++;
    }
    return (i);
}
int len_int(int *str)
{
    int i = 0;
    while (str[i])
    {
        i ++;
    }
    return (i);
}
int check_charset(char c,char *sep)
{
    int i = 0;
    while (sep[i] != '\0')
    {
        if(sep[i] == c)
        {
            return (1);
        }
        i ++;
    }
    return (0);
}
int count_words(char *str,char *charset)
{
    int i = 0;
    int  y = 0;
    int count_words = 0;
    while (str[i] != '\0')
    {
        if(check_charset(str[i],charset) == 0)
        {
            if(check_charset(str[i + 1],charset) == 1)
            {
                count_words ++ ;
            }
            else if (str[i + 1] == '\0')
            {
                count_words ++;
            }
        }
        i ++;
    }
    return (count_words);
}
int *count_characetr(char *str,char *charset)
{
    int i = 0;
    int y = 0;
    int words = 0;
    int c_char = 0;
    int *arrayint;

    words = count_words(str,charset);
    printf("%d\n",words);
    arrayint = (int *)malloc(sizeof(int) * words);
    while (str[i] != '\0')
    {
        if(check_charset(str[i],charset) == 0)
        {
            c_char ++;
            if(check_charset(str[i + 1],charset) || str[i + 1] == '\0')
            {
                arrayint[y] = c_char;
                y ++;
                c_char = 0;
            }
        }
        i ++;
    }
    return (arrayint);
}
char **ft_split(char *str, char *charset)
{
    char **split;
    int *c_char;
    int i = 0;
    int y = 0;
    int z = 0;
    int c_words = 0;
    c_char = count_characetr(str,charset);
    c_words = count_words(str,charset);
    split = (char **) malloc(sizeof(char *) * c_words);
    printf("...%d",c_words);
    if(!split)
    {
        return (0);
    }
    else
    {
        while(i < c_words)
        {
            while (y < len_int(c_char))
            {
                split[i] = (char *) malloc(sizeof(char) * c_char[y]);
                //printf("\nindex : %d, value : %d\n",i,c_char[y]);
                break;
            }
            i ++;
            y ++;
        }
    }
    i = 0;
    y = 0;
        while (str[y] != '\0')
        {
            if (i < c_words)
            {
                if(check_charset(str[y],charset) == 0)
                {
                    //printf("\n%c-",str[y]);
                    split[i][z] = str[y];
                    if (check_charset(str[y + 1],charset) || str[y + 1] == '\0')
                    {
                        i ++;
                        z = 0;
                    }else
                    {
                        z ++;
                    }
                }
            }
            y ++;
        }
    return (split);
}
int main()
{
    char s[] = "h*ello wor*ld h i";
    char sep[] = " *";
    char **split = ft_split(s,sep);
    int ln_d = len(split[0]);
    int i = 0;
    while (i < 6)
    {
        printf("\n%s",split[i]);
        i ++;
    }
    
    
    return 0;
}
