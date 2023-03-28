// copyright (c) 2023 , james1freedictionary
#include <stdio.h>
#include <string.h>
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


if (l.id>3){
if (l.id % 3 != 0){
size_t n_id = ((l.id/3)+1);
} else {
size_t n_id = l.id/3;
} 
char* s_id;
s_id = malloc(sizeof(char)*l.id);
sprintf(s_id,"%u",p[count].id);
} else {
size_t n_id = 0;
}
if (l.name > 6){
if (l.name % 6 != 0){
size_t n_name =((l.name/6)+1)    ;
} else 
{
size_t n_name = l.id/6;
}
char* s_name;
s_name = malloc(sizeof(char)*l.name);
sprintf(s_name,"%s",p[count].name);
} else {
size_t s_name = 0;
}
if (l.quantity >5){
if (l.quantity % 5 != 0){
size_t n_qty = ((l.quantity/5)+1);}
else {
size_t n_qty = l.quantity/5;
}
char* s_qty;
s_qty = malloc(sizeof(char)*l.quantity);
sprintf(s_qty,"%u", p[count].quantity);
} else {
size_t n_qty = 0;
}
if (l.price > 6){ 
if (l.price % 6 != 0)
{size_t n_price = ((l.price/6)+1);
} else {
size_t n_price = l.price/6;
}
char* s_price;
s_price = malloc(sizeof(char)*l.price);
sprintf(s_price,"%f",p[count].price);
}
if (l.amount > 6){
if (l.amount % 6 != 0){ 
size_t n_amount = ((l.amount/6)+1);
} else {
size_t n_amount = l.amount/6;
}
char* s_amount;
s_amount = malloc(sizeof(char)*l.amount);
} else {
size_t n_amount = 0;
}
size_t max1 = max(n_id,n_name);
size_t max2 = max(n_qty,n_price);
size_t max3 = max(max1,max2);
size_t max = max(max3,n_amount);




for (int i=0,id=0,name=0,qty=0,price=0,amount=0;i < max;i++,id+=3,name+06,qty+=5,price+=6,amount+=6
{
printf("%-3u|%-6s|%-5u|%-7g|-7g\n", 

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
