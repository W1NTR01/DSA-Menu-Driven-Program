#include<iostream>
using namespace std;
// ARRAY
void createArray();
void display_array();
void insert_array();
void delete_array();
void short_array();
void reverse_array();
int array[100];
int size_array,value,position;

int arr(){
    createArray();
    int choice =1;
    while(choice){
        cout<<endl<<endl<<" -----  MENU  ----- "<<endl;
        cout<<endl<<"  1. Display "<<endl;
        cout<<"  2. Insert Element from array "<<endl;
        cout<<"  3. Delete Element from array "<<endl;
        cout<<"  4. Short The Array "<<endl;
        cout<<"  5. Reverse The Array "<<endl;
        cout<<"  6. Exit "<<endl;
        cout<<endl<<"Inter your choice "<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            display_array();
            break;

            case 2:
            insert_array();
            break;

            case 3:
            delete_array();
            break;

            case 4:
            short_array();
            break;

            case 5:
            reverse_array();
            break;

            case 6:
            return 0;
            break;

            default:
            cout<<"* Invalid Choice *"<<endl;
            cout<<"* Try Again *"<<endl;
            break;
        }

    }
}
void createArray(){
    cout<<"Let's create the array first"<<endl;
    cout<<"Inter the Size of array"<<endl;
    cin>>size_array;
    for(int i =0;i< size_array;i++){
        cout<<"inter the value no "<<i<<" of the array"<<endl;
        cin>>array[i];
    }
}

void display_array(){
    for(int i=0;i< size_array;i++){
        cout<<"value no "<<i<<" of the array is "<<endl;
        cout<<array[i]<<endl;
    }
}

void insert_array(){
    cout<<"Inter the Postion for the new Element"<<endl;
    cin>>position;
    cout<<"Inter the value of the New element"<<endl;
    cin>>value;
    for (int i = size_array - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }
    array[position] = value;
    size_array = size_array + 1;
}

void delete_array(){
    cout<<"Enter the position of the element to be deleted";
    cin>>position;
    value = array[position];
    for (int i = position; i < size_array - 1; i++) {
        array[i] = array[i + 1];
    }
    size_array--;
    printf("\nThe deleted element is %d", value);
}

void short_array() {
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
    cout<<"After sorting Elements are : ";
    for(int i=0;i<size_array;i++) {
        cout<<endl<<array2[i];
    }
}

void reverse_array() {
    int rev[10];
    int j = 0;
    for(int i = size_array-1; i >= 0; i--) {  
        rev[j] = array[i];  
        j++;  
    }  
    cout<<"The Reversed array: "; 
    for(int i = 0; i < size_array; i++) {  
        cout<<endl<<rev[i];  
    }  
}
//array Ends Here

//Stack starts here
int stack[100];
int n = 100;
int top =-1;
int Value;
void push();
void pop();
void display_stack();
int Stack(){
    int choice;
    while(1){
        cout<<endl<<"<<<<<<<<  MENU  >>>>>>>>"<<endl;
        cout<<endl<<"-------  Choose an option  -------"<<endl;
        cout<<"  1. Push in Stack"<<endl;
        cout<<"  2. Pop from Stack"<<endl;
        cout<<"  3. Display Stack"<<endl;
        cout<<"  4. Exit"<<endl;
        cout<<endl<<"Enter Your choice here : - ";
        cin>>choice;
        cout<<endl;
        switch(choice){
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display_stack();
            break;

            case 4:
            cout<<"Exited"<<endl;
            return 0;

            default:
            cout<<"* Invalid Choice *"<<endl;
            cout<<"* Try Again *"<<endl;
            break;
        }
    }
}

void push() {
    cout<<endl<<"Enter value to be pushed"<<endl;
    cin>>Value;
    if(top>=n-1)
        printf("Stack Overflow\n");
    else {
        top++;
        stack[top]=Value;
    }
}

void pop() {
    if(top<=-1)
        cout<<"Stack Underflow\n";
    else {
      cout<<"The popped element is : - "<<stack[top];
      top--;
   }
}

void display_stack() {
    if(top>=0) {
        cout<<"Stack elements are:\n";
        cout<<" [ ";
        for(int i =top; i>=0; i--){
            cout<<" |"<<stack[i]<<"| ";
        }
        cout<<" ]"<<endl;
    } 
    else {
       printf("Stack is empty");
    }
}

//Queue

void enqueue();
void dequeue();
void display_queue();
int queue[50];
int size= -1;
int Queue(){
    int choice;
    while(1){
    cout<<"  ---------- MENU ----------"<<endl<<endl;
    cout<<" <<<<<<<<  chose an option  >>>>>>>>"<<endl;
    cout<<"  1. Enqueue "<<endl;
    cout<<"  2. Dequeue "<<endl;
    cout<<"  3. Display Queue "<<endl;
    cout<<"  4. Exit "<<endl;

    cout<<"Enter Your Choice :- ";
    cin>>choice;
    switch(choice){
        case 1:
        enqueue();
        break;

        case 2:
        dequeue();
        break;

        case 3:
        display_queue();
        break;

        case 4:
        cout<<"* Exited *"<<endl<<endl;
        return 0;
        break;

        default:
        cout<<"* Envalid choice *"<<endl;
        cout<<"* Try Again *"<<endl;
        break;
    }
    }
}

void enqueue(){
    int item;
    cout<<"Enter the Item in the queue :- ";
    cin>>item;
    size++;
    queue[size] = item;
}

void dequeue(){
    if(size < 0){
        cout<<"Queue is already Empty"<<endl<<endl;
    }
    else{
        for(int i=0;i<size;i++){
            queue[i] = queue[i+1];
        }
        size--;
        cout<<"Exited Item is :-"<<queue[0]<<endl;
    }
}

void display_queue(){
    cout<<"Queue Current Postion :- "<<endl;
    if(size <0){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        for(int i=size;i>=0;i--){
            cout<<queue[i];
            if(i>0){
                cout<<" --> ";
            }
        }
        cout<<endl;
    }
}

// Shorting 

void bubble(int arr[],int n) {
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
    cout<<"After Bubble sort Elements are : ";
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}

void selection(int arr[],int n) {
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
    cout<<"After Selection sort Elements are : ";
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}

void insertion(int arr[],int n) {
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
    cout<<"After Selection sort Elements are : ";
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
}

void display(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<"  ";
    }
}

int Sorting(){
    int size,choice;
    cout<<"Inter the Size of the Array"<<endl;
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++){
        cout<<"Enter array no "<<i<<" :- ";
        cin>>arr[i];
    }
    while(1){
        cout<<" <<<<<<<<  MENU  >>>>>>>> "<<endl<<endl;
        cout<<" -------- Chose an Option --------"<<endl<<endl;
        cout<<"  1. Bubble Sort  "<<endl;
        cout<<"  2. Selection Sort  "<<endl;
        cout<<"  3. Insertion Sort  "<<endl;
        cout<<"  4. Display Array  "<<endl;
        cout<<"  5. Exit  "<<endl<<endl;
    

    cout<<"Enter your Choise"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        bubble(arr,size);
        break;

        case 2:
        selection(arr,size);
        break;

        case 3:
        insertion(arr,size);
        break;

        case 4:
        display(arr,size);
        break;

        case 5:
        cout<<"* Exited *"<<endl;
        return 0;
        break;

        default:
        cout<<"* Envalid Option *"<<endl;
        cout<<"* Try again *"<<endl;
    }
    }

}
// MAIN FUNCTION

int main(){
    cout<<endl<<endl;
    cout<<"--------     Menu Driven Program     -------"<<endl<<endl;
    int choice;
    while(1){
        cout<<"<<<<<<<<<<   Menu   >>>>>>>>>>>"<<endl<<endl;
        cout<<"  1. Array"<<endl;
        cout<<"  2. Stack"<<endl;
        cout<<"  3. Queue"<<endl;
        cout<<"  4. Sorting"<<endl;
        cout<<"  5. Exit"<<endl;
        cout<<"<<<<<<<<<<     -    >>>>>>>>>>"<<endl;
        cout<<endl<<"<<<  Choose an option  >>>"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
            cout<<endl<<endl<<"* ARRAY PROPERTIES *"<<endl<<endl;
            arr();
            break;

            case 2:
            cout<<endl<<endl<<"* STACK PROPERTIES *"<<endl<<endl;
            Stack();
            break;

            case 3:
            cout<<endl<<endl<<"* QUEUE PROPERTIES *"<<endl<<endl;
            Queue();
            break;

            case 4:
            cout<<endl<<endl<<"* SORTING PROPERTIES *"<<endl<<endl;
            Sorting();
            break;

            case 5:
            cout<<"* Exited *"<<endl;
            return 0;

            default:
            cout<<endl<<"* Envalid choice *"<<endl;
            cout<<"* Try Again *"<<endl;
            break;
        }

    }
    return 0;
}