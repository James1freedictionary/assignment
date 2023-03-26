// copyright (c) 2023 , james1freedictionary
#include <stdio.h>
#include <string.h>
#define flush fflush(stdout);
struct product
{
 unsigned int id;
 char name[30];
 unsigned int quantity;
 float price;
 float amount;
};

void scan(unsigned int *id, char name[],unsigned int* quantity, float *price, struct product p[],int count) 
{
if (count==0){

puts("****** Program to insert product ******");
}
 printf("Enter id: ");
 flush
 scanf("%u",id);
 for (int i=0;i<50;i++){ 
if (count != i && p[i].id == *id)
{
 puts("The id is already existed!");
 printf("Enter id: ");
 flush
 scanf("%u", id);
 break;
 
}

}
 printf("Enter name: ");
 flush
getchar();
 
 fgets(name,30,stdin); 
 printf("Enter quantity: ");
 flush
scanf("%u",quantity);
 printf("Enter price: ");
 flush
 scanf("%f",price);
 

}
void print(unsigned *id,char* name,unsigned *quantity,float *price,float *amount, int count)
{

name[strcspn(name,"\n")]=0;
if (count == 0) {
puts("id\tname\tqty\tprice\tamount");}
printf("%u\t%s\t%u\t%g$\t%g$\n",*id,name,*quantity,*price,*amount);



}

int main()
{

struct product p[50];
char answer[5];
for (int i= 0;i<50;i++){
 if (i!=0){
 printf("do you insert more product?");
 flush
 scanf("%s", answer);
 if (strcmp(answer, "n")  == 0 || strcmp(answer,"no") == 0) {
 puts("bye bye!"); 
break;
}

}   
 scan(&p[i].id,p[i].name,&p[i].quantity,&p[i].price,p,i);
 p[i].amount = p[i].price * p[i].quantity;
for (int j=0;j <=i;j++){
print(&p[j].id,p[j].name,&p[j].quantity,&p[j].price,&p[j].amount,j);
}
}

}
