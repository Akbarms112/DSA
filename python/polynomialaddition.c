#include<stdio.h>
#include<stdlib.h>

//Polynomial node using structure 

struct node
{
    int coeff,exp;
    struct node* link;
};

//Create a polynomial using linked list
struct node* create(struct node* head,int co,int ex)
{ 
    struct node* temp,*ptr;
//if polynomial empty make the node the head node 
    if(head==NULL)
    {
        temp= (struct node*)malloc(sizeof(struct node));
        temp->coeff = co;
        temp->exp = ex;
        temp->link = NULL;
        head = temp;
    }
    else
    {
        //GO to last node and append 
        temp = head;
        while(temp -> link!= NULL)
           temp = temp->link;
           ptr=(struct node*)malloc(sizeof(struct node));
           ptr->coeff = co;
           ptr->exp = ex;
           ptr->link = NULL;
           temp->link = ptr;
    }
    return head;
}
//Sum of 2 Polynomial

struct node* polynomialaddition(struct node*p1,struct node*p2,struct node*sum)
{
    //copy the two polynomial and iniatilize variable res to store the sum
    struct node* poly1 = p1, *poly2 = p2, *result;

    //if polynomial 2 is null set polynomial 1 as sum
    if(poly1 != NULL && poly2 == NULL)
    {
        sum = poly1;
        return sum;
    }
    
//if polynomial 1 is null set polynomial 2 as sum;
   else if(poly1 == NULL && poly2 != NULL)
   {
    sum = poly2;
    return sum;
   }

//if Both the polynomial are non-empty

   while (poly1 != NULL && poly2 != NULL)
   {
     //if the sum is empty, initialize sum with a node structure'
     //and set res equal to sum
     if(sum==NULL)
     {
        sum = (struct node*)malloc(sizeof(struct node));
        result = sum;
     }
     //add a new node structure at the end pf result
     else 
     {
        result->link = (struct node*)malloc(sizeof(struct node));
        result = result->link; 
     }
     
    
    //if exponent of current node of polynomial 1 is greater than that of polynomial 2 add it to sum
    if(poly1->exp > poly2->exp)
    {
        result->coeff = poly1->coeff;
        result->exp = poly1->exp;
        poly1 = poly1->link;
      
    }
   
   //if exponent of current node of polynomial 2 is greater than that of polynomial 1 add it to sum
    else if(poly1->exp < poly2->exp)
    {
        result->coeff = poly2->coeff;
        result->exp = poly2->exp;
        poly2 = poly2->link;
    }
   
   //if exponent of current node of polynomial 2 is equal  of polynomial 1 add the sum of their co-efficient to the sum 
    else if(poly1->exp == poly2->exp)
    {
        result->coeff = poly1->coeff + poly2->coeff;
        result->exp = poly1->exp;
        poly1 = poly1->link;
        poly2 = poly2->link;
    }
   }
   
   //if polynomial 1 is non empty add their remaining nodes to their sum
   while(poly1 != NULL)
   {
    result->link = (struct node*)malloc(sizeof(struct node));
    result = result->link;
    result->coeff = poly1->coeff;
    result->exp = poly1->exp;
    poly1 = poly1->link;
   }
   //if polynomial 2 is non empty add their remaining nodes to their sum
   while(poly2 != NULL)
   {
    result->link = (struct node*)malloc(sizeof(struct node));
    result = result->link;
    result->coeff = poly2->coeff;
    result->exp = poly2->exp;
    poly2 = poly2->link;
   }
   //set pointer of last node to null

   result->link = NULL;

   //return head node of sum

   return sum;
 
}
void display(struct node* head)
{
    struct node* temp=head;
    while(temp != NULL)
    {
        printf("%dx^%d", temp->coeff, temp->exp);
        temp = temp->link;
    
    }
    if(temp==NULL)
    {
        printf(" + ");
    }
     printf("\n");
}


int main()
{
    //to store the polynomial 1, polynomial 2 and the sum
    struct node*p1 = NULL, *p2 = NULL, *sum = NULL;
    int n,co,exp;
    
    int i = 1;
    while(i)
    {
        printf("==========================================\n");
        printf("1. Enter the polynomial 1\n");
        printf("2. Enter the polynomial 2\n");
        printf("3. Display\n");
        printf("4. Addition operation \n");
        printf("5. EXIT\n");
        printf("\nEnter the value to perform operation : ");
        scanf("%d",&n);
        
        switch(n)
        {
            
            case 1: printf("Enter co-efficient\n");
                    scanf("%d",&co);
                    printf("Enter exponent\n");
                    scanf("%d",&exp);
                    p1=create(p1,co,exp);
                    break;

                    
            case 2: printf("Enter co-efficient\n");
                    scanf("%d",&co);
                    printf("Enter exponent\n");
                    scanf("%d",&exp);
                    p2=create(p2,co,exp);
                    break;
            case 3: printf("Display Polinomial:");
                    display(sum);

            case 4: sum=polynomialaddition(p1,p2,sum);
                    printf("\nPolynomial 1\n");
                    display(p1);
                    printf("\nPolynomial 2\n");
                    display(p2);
                    printf("\n sum of polynomial :\n");
                    printf("==============================================\n");
                    display(sum);
                    break;
                    

            case 5: i=0;
                    break;

            default: printf("Wrong choice reenter\n");
            break;
        }
        
    } 
    

}