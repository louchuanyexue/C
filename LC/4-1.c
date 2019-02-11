#include <stdio.h>
#define MAXLINE 100
int getline(char s[], int lim);
int strindex(char s[], char t[]);
int main()
{
    int found = 0;
    char line[MAXLINE];
    char t[] = "";
    char s[] = "";

    while (getline(s, MAXLINE) > 0)
    {
        if ((strindex(s, t)) >= 0)
        {
            printf("%s", line);
            found++;
        }
        return found;
    }
}

int getline(char s[], int lim)
{
    int i, c;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}

int strindex(char s[], char t[])
{   int i, j, k;
    for (int i = 0;s[i] != '\0'; i++)
    {
        for(int j=i, k=0;s[j] == t[k];j++, k++)
        ;
    }
    if(k>0&t[k]=='\0')
            return i;
    return -1;
}