// copyright (c) 2023 , james1freedictionary
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define flush fflush(stdout);
#define len(x,t) (sizeof(x)/sizeof(t))
struct product
{
 unsigned int id;
 char name[30];
 unsigned int quantity;
 float price;
 float amount;
};
struct length
{
 size_t id;
 size_t name;
 size_t quantity;
 size_t price;
 size_t amount;
};
void find_length(struct length,struct product[],int); 

void scan(struct product p[],int count) 
{
if (count==0){

puts("****** Program to insert product ******");
}
 printf("Enter id: ");
 flush
 scanf("%u",&p[count].id);
 for (int i=0;i<50;i++){ 
if (count != i && p[count].id == p[i].id)
{
 puts("The id is already existed!");
 printf("Enter id: ");
 flush
 scanf("%u", &p[count].id);
 break;
 
}

}
 printf("Enter name: ");
 flush
getchar();
 
 fgets(p[count].name,30,stdin); 
 printf("Enter quantity: ");
 flush
scanf("%u",&p[count].quantity);
 printf("Enter price: ");
 flush
 scanf("%f",&p[count].price);
 

}
void print(struct product p[],int count, struct length l)

{

p[count].name[strcspn(p[count].name,"\n")]=0;
if (count == 0) {
puts("id | name | qty | price | amount");

puts("---+------+-----+-------+-------");}
find_length(l,p,count);
if (l.id >3 ||l.name>6||l.quantity>5||l.price>6||l.amount>6)
{

size_t n_id;
size_t n_name;
size_t n_qty;
size_t n_price;
size_t n_amount;
char* s_id;
char* s_name;
char* s_qty;
char* s_price;
char* s_amount;
if (l.id>3){
if (l.id % 3 != 0){
n_id = ((l.id/3)+1);
} else {
 n_id = l.id/3;
} 
s_id = malloc(sizeof(char)*l.id);
sprintf(s_id,"%u",p[count].id);
} else {
 n_id = 0;
}
if (l.name > 6){
if (l.name % 6 != 0){
n_name =((l.name/6)+1)    ;
} else 
{
 n_name = l.id/6;
}

s_name = malloc(sizeof(char)*l.name);
sprintf(s_name,"%s",p[count].name);
} else {
 s_name = 0;
}
if (l.quantity >5){
if (l.quantity % 5 != 0){
 n_qty = ((l.quantity/5)+1);}
else {
 n_qty = l.quantity/5;
}

s_qty = malloc(sizeof(char)*l.quantity);
sprintf(s_qty,"%u", p[count].quantity);
} else {
 n_qty = 0;
}
if (l.price > 6){ 
if (l.price % 6 != 0)
{ n_price = ((l.price/6)+1);
} else {
 n_price = l.price/6;
}

s_price = malloc(sizeof(char)*l.price);
sprintf(s_price,"%f",p[count].price);
} else {n_price = 0}
if (l.amount > 6){
if (l.amount % 6 != 0){ 
 n_amount = ((l.amount/6)+1);
} else {
 n_amount = l.amount/6;
}

s_amount = malloc(sizeof(char)*l.amount);
} else {
 n_amount = 0;
}
size_t max1 = max(n_id,n_name);
size_t max2 = max(n_qty,n_price);
size_t max3 = max(max1,max2);
size_t max = max(max3,n_amount);

for (int i=0;i<max;++i)
{
int next_s_id=0;
int next_s_name=0;
int next_s_qty=0;
int next_s_price=0;
int next_s_amount=0;
printf("%-3.3u|%-6.6s|%-5.5u|%-7.7g|%-7.7g\n",
s_id+next_s_id,s_name+next_s_name,s_qty+next_s_qty,
s_price+next_s_price,s_amount+next_s_amount);

next_s_id += 3;
next_s_name +=6;
next_s_qty +=5;
next_s_price +=7;
next_s_amount +=7;

}


}else{
printf("%-3u|%-6s|%-5u|%-7g|%-7g\n",p[count].id,p[count].name,p[count].quantity,p[count].price,p[count].amount);
}


}
void find_length(struct length l, struct product p[],int j){
l.id = len(p[j].id,unsigned);
l.name = len(p[j].name,char);
l.quantity = len(p[j].quantity,unsigned);
l.price = len(p[j].price,float);
l.amount = len(p[j].amount,float);

}
int max(size_t a, size_t b)
{
 if (a > b) {
 return a
} else {
 return b}


}

int main()
{

struct product p[50];
struct length l;

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
scan(p,i);
 p[i].amount = p[i].price * p[i].quantity;
for (int j=0;j <=i;j++){
print(p,j,l);
}
}

}
