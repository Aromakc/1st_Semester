#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct country
    {
        char name[10];    
        int active;
        int rec;
        int death;
    }nation[200];
 
    int activecases(int j){
    printf("The number of active cases are: %d\n",nation[j].active);
    }
    int recovercases(int j){
        printf("The number of recoverd are: %d\n",nation[j].rec);
    }
    int deathcases(int j){
        printf("The number of deaths are: %d\n", nation[j].death);
    }
    int allcases(int j){
        int total = nation[j].active+nation[j].rec+nation[j].death;
        printf("Total occured cases are: %d\n",total);
        activecases(j);
        recovercases(j);
        deathcases(j);
    }

    int add_country(int k){
    printf("Enter Country name ");
    scanf("%s",nation[k].name);
    printf("Enter active cases ");
    scanf("%d",&nation[k].active);
    printf("Enter recovered cases ");
    scanf("%d",&nation[k].rec);
    printf("Enter death cases ");
    scanf("%d",&nation[k].death);
    }

    int search_country(int i,int n){
        { int r=0,three;
            char choice[200];
            printf("Which country's data you want to know about?");
            scanf("%s",choice);
            for (i=0;i<n;i++)
            {
            r=strcmp(choice,nation[i].name);
            if (r!=0)
            continue;
            else
            printf("Which case u wanna see \n");
            printf("1=Active cases \n");
            printf("2=Recovered \n");
            printf("3=Deaths \n");
            printf("4=all cases \n");
            scanf("%d",&three);
            switch (three)
            {
                case 1 : activecases(i); break;
                case 2 : recovercases(i); break;
                case 3: deathcases(i); break;
                case 4: allcases(i); break;
                default: printf("Wrong Input \n"); 
                break;
            }
        }
        }
    }

int main()
{
    static int i=0;
    static int n=0;
    int j,k=0,r,three;
    
    printf("how many countries record you want to input?");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        
        printf("Enter Country name ");
        scanf("%s",nation[i].name);
        printf("Enter active cases ");
        scanf("%d",&nation[i].active);
        printf("Enter recovered cases ");
        scanf("%d",&nation[i].rec);
        printf("Enter death cases ");
        scanf("%d",&nation[i].death);
        printf("\n");
        
     }
    char loop;
    do
    { 
    
    char next;    
    printf("******************************** \n");
    printf("Press C: Search another country \n");
    printf("Press D: Add new data \n");
    scanf("%s",next);
    if(next == 'C')
        search_country(i,n);
    else if(next =='D')
        add_country(i);
    else
        break;
    printf("Wanna proceed y/n");
    scanf("%s",&loop);}
    while (loop=='y');
    return 0;
}










/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct country
    {
        char name[10];    
        int active;
        int rec;
        int death;
    }nation[200];
 
    int activecases(int j){
    printf("The number of active cases are: %d\n",nation[j].active);
    }
    int recovercases(int j){
        printf("The number of recoverd are: %d\n",nation[j].rec);
    }
    int deathcases(int j){
        printf("The number of deaths are: %d\n", nation[j].death);
    }
    int allcases(int j){
        int total = nation[j].active+nation[j].rec+nation[j].death;
        printf("Total occured cases are: %d\n",total);
        activecases(j);
        recovercases(j);
        deathcases(j);
    }

    int add_country(int k){
    printf("Enter Country name ");
    scanf("%s",nation[k].name);
    printf("Enter active cases ");
    scanf("%d",&nation[k].active);
    printf("Enter recovered cases ");
    scanf("%d",&nation[k].rec);
    printf("Enter death cases ");
    scanf("%d",&nation[k].death);
    }
int main()
{
    int i=0,j,n,k=0,r,three;
    char choice[200];
    printf("how many countries record you want to input?");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        
        printf("Enter Country name ");
        scanf("%s",nation[i].name);
        printf("Enter active cases ");
        scanf("%d",&nation[i].active);
        printf("Enter recovered cases ");
        scanf("%d",&nation[i].rec);
        printf("Enter death cases ");
        scanf("%d",&nation[i].death);
        printf("\n");
        k=i;
    }
    printf("Which country's data you want to know about?");
    scanf("%s",choice);
    for (i=0;i<n;i++)
    {
        r=strcmp(choice,nation[i].name);
        if (r!=0)
        continue;
        else
        {
        printf("Which case u wanna see \n");
        printf("1=Active cases \n");
        printf("2=Recovered \n");
        printf("3=Deaths \n");
        printf("4=all cases \n");
        scanf("%d",&three);
        switch (three)
        {
            case 1 : activecases(i); break;
            case 2 : recovercases(i); break;
            case 3: deathcases(i); break;
            case 4: allcases(i); break;
            default: printf("Wrong Input \n"); 
            break;
        }
    printf("******************************** \n");
    printf("Press 1: Search another country \n");
    printf("Press 2: Add new value \n");
    if()
        }
    }
   
return 0;
}

*/
