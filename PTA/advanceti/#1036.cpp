#include<cstdio>
struct pnode{
    char name[15];
    char gender;
    char id[15];
    int grade;
}male,female,temp;
int main(){
    int n;
    male.grade=110;
    female.grade=-1;
    scanf("%d",&n);
    while(n--){
        scanf("%s %c %s %d",&temp.name,&temp.gender,&temp.id,&temp.grade);
        if(temp.gender=='M'&&temp.grade<male.grade)male=temp;
        if(temp.gender=='F'&&temp.grade>female.grade)female=temp;
    }
    if(female.grade!=-1){
        printf("%s %s\n",female.name,female.id);
        if(male.grade != 110){
            printf("%s %s\n",male.name,male.id);
            printf("%d",female.grade-male.grade);
        }
        else
        {
            printf("Absent\n");
            printf("NA");
        }
    }
    else{
        printf("Absent\n");
        if(male.grade != 110){
            printf("%s %s\n",male.name,male.id);
        }
        else
        {
            printf("Absent\n");
        }
        printf("NA");
    }
    return 0;
}