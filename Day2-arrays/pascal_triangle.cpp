class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>r(numRows);
        for(int i=0;i<numRows;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++){
                r[i][j]=r[i-1][j-1]+r[i-1][j];
            }
        }
        return r;
    }
};
/*
here three types generally asked in interview:
1.print pascal triangle
2.print particular element
3.print particular row
*/
#include<bits/stdc++.h>
using namespace std;
int fact(int);
int comb(int,int);
void pascal(int);
main(){
    int line;
    cout<<"enter the line that have to print for pascal triangle"<<endl;
    cin>>line;
    pascal(line);
    //int f=fact(line);
    //cout<<f<<endl;
    //int c=comb(n,r);
    //cout<<c;
    return 0;
}
void pascal(int line){
    int i=1;
    int j=1;
    int k=1;
    for(i=1;i<=line;i++){
        int r=0;

        for(j=1;j<=(2*line-1);j++){
            if((j>=(line+1-i))&&(j<=(line-1+i))&&k){
                cout<<" "<<comb(i-1,r)<<" ";
                r++;
                k=0;
            }
            else{
                cout<<"   ";
                k=1;
            }

        }cout<<endl;
    }



}
int fact(int n){
    int f=1;
    //if(n==0){
       // f=1;
    //}
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int comb(int n,int r){
    int c;
    //if(n==0){
        //c=1;
    //}
    //else if(r==0){
        //c=1;
    //}
    //else{
        //c=(fact(n)/(fact(n-r)*fact(r)));
    //}
    c=(fact(n)/(fact(n-r)*fact(r)));
    return c;

}
