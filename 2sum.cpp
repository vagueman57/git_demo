#include<bits/stdc++.h>
using nmaespace std;

string read1(vector<int> &book , int n; int target){
    // brute
    int sum=0; 
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum = book[i];
            sum += book[j];
            if(sum==target) return "YES";
        }
    }
    return "NO";
}
string read2(vector<int> &book , int n; int target){
     map<int,int> mpp;
    for(int i=0; i<n; i++){
        
        int rempage = target-book[i];
        if( mpp.find(rempage) != mpp.end() ){
            return "YES";
        }
        mpp[book[i]] = i;
    }
    return "NO";
}
string read3(vector<int> &book , int n; int target){
    int left =0; 
   int right =n-1;
   sort(book.begin() , book.end());
   while(left<right){
       int sum = book[left]+book[right];
       if (sum == target) {
         return "YES";
       } 
       else if (sum > target) {
           right--;
       }
       else{
           left++;
       }
   }
    return "NO";
}
int main(){
    int n , target; 
    cin >> n >> target;
    vector<int> book(n);
    for(int 0; i<n; i++){
        cin>> book[i];
    }
    read(book, n, target);
    cout << read(book, n, target);
     
}