#include<stdio.h>
#include<stdlib.h>
#include<conio.h>   

//Functions of ARRAY starts 

void Create_Array();
void Print_Array();
void Insert_In_Array();
void Delete_In_Array();
void Sort_Array();
void Reverse_Array();
int array[20];
int size_array, value, position;


int Array () {
    int choice = 1;
    while (choice) {
        printf(" \n\n                   ********MENU******                     ");
        printf("\n|--------------------------------------------------------|\n");
        printf("  |                                                        |\n");
        printf("  |     what you want to do in array:                      |\n");
        printf("  |                                                        |\n");
        printf("  |    1.Create Array                                      |\n");
        printf("  |    2.Display                                           |\n");
        printf("  |    3.Insert element in the Array                       |\n");
        printf("  |    4.Delete Element from the Array                     |\n");
        printf("  |    5.Sort the Array                                    |\n");
        printf("  |    6.Reverse the Array                                 |\n");
        printf("  |    7.Exit                                              |\n");
        printf("  |                                                        |\n");
        printf("  |--------------------------------------------------------|\n");
        printf("\n\n  Enter your choice from given Options:");
        
        scanf("%d",&choice);
        switch(choice) {
  
            case 1: 
                Create_Array();
                break;
            
            case 2: 
                Print_Array();
                break;

            case 3:
                Insert_In_Array();
                break;

            case 4:
                Delete_In_Array();
                break;

            case 5:
                Sort_Array();
                break;

            case 6:
                Reverse_Array();
                break;

            case 7:
                return 0;
                break;

            default:
                printf("  \n Invalid Choice");
        }
    }
}


//Creating an Array 


void Create_Array() {
    printf("\nEnter the size of the array elements:\t");
    scanf("%d", &size_array);
    printf("\nEnter the elements for the array:\n");
    for (int i = 0; i < size_array; i++) {
        scanf("%d", &array[i]);
    }
}


//Displaying the Array elements


void Print_Array() {
    printf("\nThe array elements are:\n");
    for (int i = 0; i < size_array; i++)
    {
        printf("%d\t", array[i]);
    }
}


//Inserting an element in the Array


void Insert_In_Array() {
    printf("\nEnter the position for the new element:\t");
    scanf("%d", &position);
    printf("\nEnter the element to be inserted :\t");
    scanf("%d", &value);
    for (int i = size_array - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }
    array[position] = value;
    size_array = size_array + 1;
}


//Deleting an array element


void Delete_In_Array() {
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d", &position);
    value = array[position];
    for (int i = position; i < size_array - 1; i++) {
        array[i] = array[i + 1];
    }
    printf("\nThe deleted element is %d", value);
}


//Sorting the Array


void Sort_Array() {
    int array2[20];
    int temp,j;
    for(int i=0; i<size_array; i++) {
        array2[i] = array[i];
    }
    for(int i=0;i<size_array-1;i++) {
        for(j=i+1;j<size_array;j++) {
            if(array2[i]>array2[j]) {
                temp=array2[i];
                array2[i]=array2[j];
                array2[j]=temp;
            }
        }
    }
    printf("After Selection sort Elements are : ");
    for(int i=0;i<size_array;i++) {
        printf(" %d ",array2[i]);
    }
}

//Reversing the Array 


void Reverse_Array() {
    int rev[10];
    int j = 0;
    for(int i = size_array-1; i >= 0; i--) {  
        rev[j] = array[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(int i = 0; i < size_array; i++) {  
        printf("%d ", rev[i]);  
    }  
}


//Functions of LINKED LIST starts here

struct node {  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display_List();  
void search_List();  




int Linked_List (){
    int ch; 
    while(1) {
        printf(" \n\n                ********MENU******                     ");
        printf("\n|--------------------------------------------------------|\n");
        printf("  |                                                        |\n");
        printf("  |  Choose what you want to do in Linked List:            |\n");
        printf("  |                                                        |\n");
        printf("  |    1.Insert in beginning                               |\n");
        printf("  |    2.Insert at Last                                    |\n");
        printf("  |    3.Delete from beginning                             |\n");
        printf("  |    4.Delete from last                                  |\n");
        printf("  |    5.Search for an element                             |\n");
        printf("  |    6.Display                                           |\n");
        printf("  |    7.Exit                                              |\n");
        printf("  |                                                        |\n");
        printf("  |--------------------------------------------------------|\n");
        printf("\n\n  Enter your choice from the given Options:");
        
        scanf("%d",&ch);
        switch(ch) {
            case 1:
                beginsert();
                break;
            
            case 2:
                lastinsert();
                break;
            
            case 3:
                begin_delete();
                break;
            
            case 4:
                last_delete();
                break;
            
            case 5:
                search_List();
                break;
                
            case 6:
                display_List();
                break;
                
            case 7:
                return 0;
                break;
            
            default:
                printf("  \n Invalid Choice");
        }
    }
}

void beginsert()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data?");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nnode inserted\n");  
    }  
              
}  
void lastinsert()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter Data?");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nnode inserted\n");  
    }  
  
}  
  
void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
}  
void last_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nnode deleted\n");  
  
    }  
}  
  
void search_List()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("item found at location %d",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
  
void display_List()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d --> ", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d\n", ptr -> data);  
    }  
              
}  


//Functions of the LINKED LIST ends here



//Functions of STACK starts here


int stack[100], n=100, top=-1;

//Pushing an element into the Stack 


void push(int val) {
    if(top>=n-1)
        printf("Stack Overflow\n");
    else {
        top++;
        stack[top]=val;
    }
}

//Poping out an element from the Stack 


void pop() {
    if(top<=-1)
        printf("Stack Underflow\n");
    else {
      printf("The popped element is %d\n", stack[top]);
      top--;
   }
}


//Displaying the Stack 


void display() {
    if(top>=0) {
        printf("Stack elements are:\n");
        printf(" --------\n");
        for(int i=top; i>=0; i--)
            printf(" |  %d  |\n",stack[i]);
    } else {
       printf("Stack is empty");
    }
    printf(" --------\n");
}


int Stack () {
    int ch, val; 
    while(1) {
        printf(" \n\n                ********MENU******                     ");
        printf("\n|--------------------------------------------------------|\n");
        printf("  |                                                        |\n");
        printf("  |    Choose what you want to do in Stack:                |\n");
        printf("  |                                                        |\n");
        printf("  |    1.Push in Stack                                     |\n");
        printf("  |    2.Pop from Stack                                    |\n");
        printf("  |    3.Display Stack                                     |\n");
        printf("  |    4.Exit                                              |\n");
        printf("  |                                                        |\n");
        printf("  |--------------------------------------------------------|\n");
        do {
            printf("\n\n  Enter your choice from the given Options:");
        
            scanf("%d",&ch);
            switch(ch) {
                case 1: 
                    printf("Enter value to be pushed:\n");
                    scanf("%d",&val);
                    push(val);
                    break;
                
                case 2: 
                    pop();
                    break;
                
                case 3: 
                    display();
                    break;
                
                case 4: 
                    printf("Exit\n");
                    return 0;
                    break;
                
                default:
                    printf("Invalid Choice\n");
                
            }
        }while(ch!=4);
    } 
    return 0;
}


//Functions of STACK ends here



//Functions of SORTING starts here


//Displaying the Array


void show(int arr[],int n) {
    for(int i=0;i<n;i++) {
        printf(" %d ",arr[i]);
    }
}


//Function of BUBBLE SORT 


void bubble_sort(int arr[],int n) {
    int i,j,temp;
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("After Bubble sort Elements are : ");
    show(arr,n);
}


//Function of SELECTION SORT 


void selection_sort(int arr[],int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++) {
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After Selection sort Elements are : ");
    show(arr,n);
}


//Function of INSERTION SORT


void insertion_sort(int arr[],int n) {
    int i,j,min;
    for(i=1;i<n;i++) {
        min=arr[i];
        j=i-1;
        while(min<arr[j] && j>=0) {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=min;
    }
    printf("After Insertion sort Elements are : ");
    show(arr,n);
}


//Function of QUICK SORT 


void quick_sort (int arr[], int n) {
    int quickSort(int *arr, int low, int high){
        int i = low, j = high;
        int pivot = arr[(low + high) / 2];
        while (i <= j) {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        if (low < j)
            quickSort(arr, low, j);
        if (i < high)
            quickSort(arr, i, high);
        return 0;
    }
    int low = 0;
    int high = n - 1;
    int pivot = arr[high];
    int k = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            k++;
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[k + 1];
    arr[k + 1] = arr[high];
    arr[high] = temp;
    int pi = k + 1;
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
    printf("After Quick sort Elements are : ");
    show(arr,n);
}


//Function of SORTING 


int Sorting () {
    int n, choice, i;
    char ch[20];
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d Element : ",n);
    for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
    }

    while(1) {
        printf(" \n\n                ********MENU******                     ");
        printf("\n|--------------------------------------------------------|\n");
        printf("  |                                                        |\n");
        printf("  |    Choose the type of Sorting you want to perform:     |\n");
        printf("  |                                                        |\n");
        printf("  |    1.Bubble Sort                                       |\n");
        printf("  |    2.Selection Sort                                    |\n");
        printf("  |    3.Insertion Sort                                    |\n");
        printf("  |    4.Quick Sort                                        |\n");
        printf("  |    5.Display Array                                     |\n");
        printf("  |    6.Exit                                              |\n");
        printf("  |                                                        |\n");
        printf("  |--------------------------------------------------------|\n");
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);

        switch(choice) {
            
            case 1:
                bubble_sort(arr,n);
                break;
            
            case 2:
                selection_sort(arr,n);
                break;
            
            case 3:
                insertion_sort(arr,n);
                break;
            
            case 4:
                quick_sort(arr, n);
                break;
            
            case 5:
                show(arr,n);
                break;
            
            case 6:
                return 0;
            
            default:
                printf("\n Select 1-6 option ----\n");
        }
    }
    return 0;
}

//Functions of SORTING ends here
// MAIN FUNCTION STARTS HERE

int main () {
    int choice;
    printf("\n||-------------------------------------------------------------------------------------------------------------------------------------------||\n");
    printf("\n||                                                       ||MENU DRIVEN PROGRAM FOR DATA STRUCTURE||                                          ||\n");
    printf("\n||-------------------------------------------------------------------------------------------------------------------------------------------||\n");
    while (1){
        printf("\n             ***********   MAIN MENU  *************\n");
        printf("\n|--------------------------------------------------------|\n");
        printf("  |                                                        |\n");
        printf("  |    Choose what you want to play with::                 |\n");
        printf("  |                                                        |\n");
        printf("  |    1.Array                                             |\n");
        printf("  |    2.Linked List                                       |\n");
        printf("  |    3.Stack                                             |\n");
        printf("  |    4.Sorting                                           |\n");
        printf("  |    5.Exit                                              |\n");
        printf("  |--------------------------------------------------------|\n");
        printf("\n\n  Enter your choice  given Options:");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("\n|--------------------|\n");
                printf("  |       ARRAY        |\n");
                printf("  |--------------------|\n");
                Array();
                break;
            
            
            case 2:
                printf("\n|--------------------|\n");
                printf("  |    LINKED LIST     |\n");
                printf("  |--------------------|\n");
                Linked_List();
                break;
            
            
            case 3:
                printf("\n|--------------------|\n");
                printf("  |       STACK        |\n");
                printf("  |--------------------|\n");
                Stack();
                break;
            
            
            case 4:
                printf("\n|--------------------|\n");
                printf("  |     SORTING        |\n");
                printf("  |--------------------|\n");
                Sorting();
                break;
            
            
            case 5:
                printf("\n|--------------------|\n");
                printf("  |      EXITED        |\n");
                printf("  |--------------------|\n");
                return 0;
                break;
            
            
            default:
                printf("\n\n  You pressed a wrong key....");
        }
    }
}