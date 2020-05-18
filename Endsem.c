// SUBASH KHATRI 33 CS-1st Year
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int i=0;
int n=0;
struct country{
        char name[20];    
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
// Function to add country
    void add_country(){
    extern int i;
    extern int n;
    printf("\nEnter Country name (First letter capital)");
    scanf(" %[^\n]",nation[i].name);
    printf("Enter active cases ");
    scanf("%d",&nation[i].active);
    printf("Enter recovered cases ");
    scanf("%d",&nation[i].rec);
    printf("Enter death cases ");
    scanf("%d",&nation[i].death);
    i++;
    n++;
    printf("\n************************************ \n");
    printf("Countries recorded : %d \n",i);
    }
// Function  to search recorded countries
    int search_country(int k,int n){
        { int r=0,three;
            extern int n;
            char choice[200];
            printf("\n Which country's info do you want (First letter Capital)? ");
            scanf(" %[^\n]",choice);
            for (k=0;k<n;k++)
            {
                r=strcmp(choice,nation[k].name);
                if (r!=0){
                    if((k+1)==n)
                     {printf("*****Country is not listed****");}
                    continue;}
                else
                printf("Which case u wanna see \n");
                printf("1=Active cases \n");
                printf("2=Recovered \n");
                printf("3=Deaths \n");
                printf("4=all cases \n");
                scanf("%d",&three);
                switch (three)
                {
                    case 1 : activecases(k); break;
                    case 2 : recovercases(k); break;
                    case 3: deathcases(k); break;
                    case 4: allcases(k); break;
                    default: printf("Wrong Input \n"); 
                    break;
                }
            }      
        }
    }
// Function to calculate world active cases
int wactivecases()
{   extern int i;
    extern int n;
    int total_active=0;
    for (i=0;i<n;i++)
    { total_active += nation[i].active;}
    return total_active;
}
// Function to calculate world death cases
int wdeathcases()
{   extern int i;
    extern int n;
    int total_deaths=0;
    for (i=0;i<n;i++)
    { total_deaths += nation[i].death;}
    return total_deaths;
}
// Function to calculate world recovered cases
int wrecovercases()
{   extern int i;
    extern int n;
    int total_recover=0;
    for (i=0;i<n;i++)
    { total_recover += nation[i].rec;}
    return total_recover;
}
// Function to calculate world total cases
int wcases()
{   extern int i;
    extern int n;
    int cases=0;
    for (i=0;i<n;i++)
    { cases += (wrecovercases()+wactivecases()+wdeathcases());}
    return cases;
}
// Function to print overall world cases
void printworld()
{   
    printf("\nWorld total cases = %d \n",wcases());
    printf("World active cases = %d \n",wactivecases());
    printf("World Recovered cases= %d \n",wrecovercases());
    printf("World Deaths cases = %d \n",wdeathcases());
}

int main()
{
    printf("*******RECORD OF COVID 19*********** \n");
    printf("************************************ \n");
    add_country();   
    int j,k=0;
    int loop;
    do    
    {     
    char next;    
    printf("************************************ \n");
    printf("Press C: Search Countries \n");
    printf("Press D: Add new data \n");
    printf("Press W: See World records(Sum datas) \n");
    printf("Press Q: Quit the program \n");
    printf("Choice : ");
    scanf("%s",&next);
    if(toupper(next) == 'C')
        search_country(i,n);
    else if(toupper(next) =='D')
         add_country();
    else if(toupper(next) == 'W')
        printworld();
    else if(toupper(next) == 'Q')
       goto flag1;
    else
        printf("\nWrong input \n");
        printf("\n->Press 1 to continue \n->Press 2 to quit\n");
    scanf("%d",&loop);}
    while (loop!=2);
    flag1:
    exit;    
}
