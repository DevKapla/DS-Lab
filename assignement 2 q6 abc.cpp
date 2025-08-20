#include <iostream>
using namespace std;

int main() {
    int r1[10], c1[10], v1[10];
    int r2[10], c2[10], v2[10];
    int r3[20], c3[20], v3[20];
    int n1, n2;

  
    cout<<"enter number of non zero elements in first matrix: ";
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>r1[i]>>c1[i]>>v1[i];
    }

    
    cout<<"enter number of non zero elements in second matrix: ";
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>r2[i]>>c2[i]>>v2[i];
    }

    cout<<"transpose of first matrix:"<<endl;
    for(int i=0;i<n1;i++){
        cout<<c1[i]<<" "<<r1[i]<<" "<<v1[i]<<endl;
    }

    cout<<"addition of first and second matrix:"<<endl;
    int k=0;
    for(int i=0;i<n1;i++){
        r3[k]=r1[i];
        c3[k]=c1[i];
        v3[k]=v1[i];
        k++;
    }
    for(int i=0;i<n2;i++){
        int found=0;
        for(int j=0;j<k;j++){
            if(r3[j]==r2[i] && c3[j]==c2[i]){
                v3[j]+=v2[i];
                found=1;
                break;
            }
        }
        if(found==0){
            r3[k]=r2[i];
            c3[k]=c2[i];
            v3[k]=v2[i];
            k++;
        }
    }
    for(int i=0;i<k;i++){
        cout<<r3[i]<<" "<<c3[i]<<" "<<v3[i]<<endl;
    }

    cout<<"multiplication of first and second matrix:"<<endl;
    int r4[20], c4[20], v4[20];
    int m=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(c1[i]==r2[j]){
                int rr=r1[i];
                int cc=c2[j];
                int vv=v1[i]*v2[j];
                int found=0;
                for(int p=0;p<m;p++){
                    if(r4[p]==rr && c4[p]==cc){
                        v4[p]+=vv;
                        found=1;
                        break;
                    }
                }
                if(found==0){
                    r4[m]=rr;
                    c4[m]=cc;
                    v4[m]=vv;
                    m++;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        cout<<r4[i]<<" "<<c4[i]<<" "<<v4[i]<<endl;
    }

    return 0;
}
