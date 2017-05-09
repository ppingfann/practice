#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT 80
void ToUpper(char *);
int PunctCount(const char *);

int main()
{
  char line[LIMIT];
  
  puts("Please enter a line: ");
  fgets(line,LIMIT,stdin);
  line[strlen(line)-1]='\0';
  ToUpper(line);
  puts(line);
  printf("That line has %d punctuation character.\n",PunctCount(line));
  return 0;
}

void ToUpper(char *str)
{
  while(*str)
  {
    *str=toupper(*str);
    str++;
  }
}
 
int PunctCount(const char *str)
{
  int ct = 0;
  while(*str)
  {
    if(ispunct(*str))
      ct++;
    str++;
  }
  return ct;
}


