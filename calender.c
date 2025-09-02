    #include<stdio.h>
    int main(){

int monthdays,startingday;
printf("enter the number of days in month;");
scanf("%d", &monthdays);
printf("enter starting days of week (1=sunday,7=saturday)");
scanf("%d",&startingday);

for(int i=startingday-1; i>0;i--){
printf("   ");
}
 for (int i=1; i<=monthdays;i++){
printf("%2d ", i);
if((i+startingday-1)%7==0){
    printf("\n");
}
}
return 0;
}






    