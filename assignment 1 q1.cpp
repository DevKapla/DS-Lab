#include<iostream>
using namespace std;
int arr[100],n;
void create(){
    cout<<"enter size";
    cin>>n;
    cout<<"enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void display(){
    cout<<"array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
void insert(){
    int pos,val;
    cout<<"enter the position to insert at";
    cin>>pos;
    cout<<"enter the value to insert at that position";
    cin>>val;
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=val;
    n++;
}
void del(){
    int pos;
    cout<<"enter the position to delete ";
    cin >>pos;
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void search(){
    int val;
    cout<<"enter the value to search";  
    cin>>val;
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            cout<<"found at position"<<i+1<<endl;
            found=1;
            
        }
    }if (found=0){
        cout<<"not found "<<endl;
        
    }
}

int main() {
    int ch;
    while (1) {
        cout << "1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.SEARCH\n6.EXIT\n";
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: del(); break;
            case 5: search(); break;
            case 6: return 0;
            default: cout << "Invalid choice\n";
        }
    }
}
