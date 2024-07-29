//Sliding window

int birthday(vector<int> s, int d, int m) {
    
    //subarray length equalling to birth month-m
    //containing integers summing upto birthdate-n
    
    int n =s.size();
    int currSum=0, count =0;

  //checks the first window
    for(int i=0; i<m; ++i){
        currSum+=s[i];
    }
    if(currSum==d){
        count++;
    }
  //Moving the window to the right, checking if the sum matches by removing the left element
    for(int i=m; i<n; ++i){
        currSum+=s[i]-s[i-m];
        if(currSum==d){
            count++;
        }
    }  
    return count;  
}
