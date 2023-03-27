// copyright (c) 2023 , james1freedictionary
#include <stdio.h>
#include <string.h>
#define flush fflush(stdout);
#define len(x) (sizeof(x)/sizeof(x[0]))
struct product
{
 unsigned int* id;
 char name[30];
 unsigned int* quantity;
 float* price;
 float* amount;
};
struct length
{
 size_t *id;
 size_t *name;
 size_t *quantity;
 size_t *price;
 size_t *amount;
};
struct  string{
 char id[];
 char quantity[];
 char price[];
 char amount[]; 
};
void scan(struct product p[],int count) 
{
if (count==0){

puts("****** Program to insert product ******");
}
 printf("Enter id: ");
 flush
 scanf("%u",p[count].id);
 for (int i=0;i<50;i++){ 
if (count != i && *p[count].id == *p[i].id)
{
 puts("The id is already existed!");
 printf("Enter id: ");
 flush
 scanf("%u", p[count].id);
 break;
 
}

}
 printf("Enter name: ");
 flush
getchar();
 
 fgets(p[count].name,30,stdin); 
 printf("Enter quantity: ");
 flush
scanf("%u",p[count].quantity);
 printf("Enter price: ");
 flush
 scanf("%f",p[count].price);
 

}
void print(struct product p[],int count, struct length l, struct string s)
{

p[count].name[strcspn(p[count].name,"\n")]=0;
if (count == 0) {
puts("id | name | qty | price | amount");

puts("---+------+-----+-------+-------");}
int exceed_char_limit;
if (l.id >3 ||l.name>6||l.quantity>5||l.price>6||l.amount>6)
{
exceed_char_limit=1;
 tostring(s,p,count);
 while (exceed_char_limit){
 size_t n_part_id = ((l.id_l/3)+(l.id_l%3));
 size_t n_part_name = ((l.name_l/6)+(l.name_l%3));
size_t n_part_qty = ((l.quantity/5)+(l.quantity%5));
 size_t n_part_price = ((l.price/6)+(l.price%6));
 size_t n_part_amount = ((l.amount/6)+(l.amount%6));
}else{
printf("%-3u|%-6s|%-5u|%-6g$|%6g$\n",*id,name,*quantity,*price,*amount);
}


}
void find_length(struct length l, struct product p,int j){
*l.id = len(*p[j].id);
*l.name = len(*p[j].name);
*l.quantity = len(*p[j].quantity);
*l.price = len(*p[j].price);
*l.amount = len(*p[j].amount);

}
void tostring(struct string s, struct product p[],int j)
{
sprintf(s.id,"%d",*p[j].id);
sprintf(s.quantity,"%d",*p[j].quantity);
sprintf(s.price,"%f",*p[j].price);
sprintf(s.amount,"%f",*p[j].anount);

}


int main()
{

struct product p[50];
struct length l;
struct string s;
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
find_length(l,p,j);
print(p,j,l,s);
}
}

}
