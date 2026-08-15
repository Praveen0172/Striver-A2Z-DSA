#include<iostream>
using namespace std;
//pattern17,pattern18 and specially pattern22 are really good patterns.
void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<(2*i)+1;k++){
            cout<<"* ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"  ";
        }
        for(int k=0;k<(2*n)-(2*i)-1;k++){
            cout<<"* ";
        }
        for(int l=0;l<=i;l++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
        }
        for(int k=0;k<(2*i)+1;k++){
            cout<<"* ";
        }
        for(int l=0;l<n-i;l++){
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"  ";
        }
        for(int k=0;k<(2*n)-(2*i)-1;k++){
            cout<<"* ";
        }
        for(int l=0;l<=i;l++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0 && j%2==0){
                cout<<1<<" ";
            }
            else if(i%2!=0 && j%2==0){
                cout<<0<<" ";
            }
            else if(i%2!=0 && j%2!=0){
                cout<<1<<" ";
            }
            else if(i%2==0 && j%2!=0){
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";
        }
        for(int k=0;k<2*(n-i-1);k++){
            cout<<"  ";
        }
        for(int l=0;l<=i;l++){
            cout<<i+1-l<<" ";
        }
        cout<<endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void pattern14(int n){
    for(int i=0;i<n;i++){
        for(char c='A';c<='A'+i;c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i=0;i<n;i++){
        for(char c='A';c<'A'+n-i;c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
    char c='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        char ch='A';
        int br_pt=(2*i+1)/2;
        for(int k=0;k<2*i + 1;k++){
            cout<<ch<<" ";
            if(k<br_pt) ch++;
            else ch--;
        }
        for(int l=0;l<n-i-1;l++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern18(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<char(ch+n-i-1)<<" ";
            ch++;
        }
        cout<<endl;
    }
}
void pattern19(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }
        for(int l=i;l<n;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int a=0;a<n;a++){
        for(int b=0;b<=a;b++){
            cout<<"*";
        }
        for(int c=0;c<2*(n-a-1);c++){
            cout<<" ";
        }
        for(int d=n-a-1;d<n;d++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void pattern20(int n){
    for(int a=0;a<n;a++){
        for(int b=0;b<=a;b++){
            cout<<"*";
        }
        for(int c=0;c<2*(n-a-1);c++){
            cout<<" ";
        }
        for(int d=n-a-1;d<n;d++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*i;k++){
            cout<<" ";
        }
        for(int l=i;l<n;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern21(int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern22(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2-j);
            int bottom=(2*n-2-i);
            cout<<(n-min(min(top,bottom),min(right,left)))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern22(n);
    return 0;
}