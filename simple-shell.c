#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 int c,d,z=0;
 char cmd[100],spstrng[20][20];
 while(1)
 {
 gets(cmd); 
 char* token = strtok(cmd, " "); 
 int split = 0;
while (token != NULL)
{
strcpy(spstrng[split], token);
split++;
token = strtok(NULL, " ");
}
 c=atoi(spstrng[1]);
 d=atoi(spstrng[2]);
 if (strcmp(spstrng[0],"bye") == 0)
 {
 exit(0);
 }
 Cmds(spstrng[0],c,d);
}
 return 0;
}
int Cmds(char cmd[],int c,int d,int z)
{
 {
 if ((strcmp(cmd,"add") == 0 || strcmp(cmd,"Add") == 0 || strcmp(cmd,"ADD") == 0) && (c>0) && (d>0) )
        {
            z=c+d;
            printf("\n%d",z);
             printf("\n");
             
        }

          else if ((strcmp(cmd,"sub") == 0 || strcmp(cmd,"Sub") == 0 || strcmp(cmd,"SUB") == 0) && (c>0) && (d>0) && (c>d) )
        {
            z=c-d;
            printf("\n%d",z);
             printf("\n");
             
        }


          else if (strcmp(cmd,"mul") == 0 || strcmp(cmd,"Mul") == 0 || strcmp(cmd,"MUL") == 0  )
        {
            z=c*d;
            printf("\n%d",z);
             printf("\n");
             
        }


         else  if ((strcmp(cmd,"div") == 0 || strcmp(cmd,"Div") == 0 || strcmp(cmd,"DIV") == 0) && (c>0) && (d>0) && (c !=0) && (d !=0))
        {
            z=c/d;
            printf("\n%d",z);
             printf("\n");
             
        }

        else{
            printf("Invalid Command");
            printf("\n");
            

        }
}
 }

