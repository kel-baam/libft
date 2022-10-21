#include "libft.h"
int len_words(char const *s,char c)
{
    int i;
    int len_words;
    int flag=0;
    len_words = 0;
    i=0;

    while(s[i])
    {  
        if(s[i]==c)
        {
            len_words += flag;
            flag = 0;
            while(s[i] == c)
                i++;
        }
        else
        {
            flag = 1;
            i++;
        }
    }
    if(flag==1)
      len_words++;
    return(len_words);
}
char *fun(char const *s,char c,int *index)
{
    int start=0;
    int flag=0;

    while(s[*index])
    {
        if(s[*index]==c)
        {
            if(flag==1)
                break;
            while(s[*index]==c)
                (*index)++;
            flag=0;
        
        }
        else
        {
            if(!flag)
                start = *index;
            flag=1;
            (*index)++;
        }   
    }
    return ft_substr(s,start,*index - start);
}

char **ft_split(char const *s, char c)
{
    int i;
    int len;
    int index;
    char **split_string;
    if(!s)
        return NULL;
    index=0;
    len = len_words(s,c);
    i=0;
    
    split_string = (char **)malloc((len+1)*sizeof(char*));
    if(!split_string)
        return NULL;
    while(i<len)
    {
        split_string[i] = fun(s,c,&index);
        i++;
    }
    split_string[i] = NULL;
    return (split_string);
}

// int main()
// {
//     char str[]="hello,hi,hiii";
//     char sep = ',';
//     char **sss = ft_split(str, sep);
//     int i = 0;

//     while(sss[i])
//     {
//         printf("|%s|\n", sss[i++]);
//     }
//}