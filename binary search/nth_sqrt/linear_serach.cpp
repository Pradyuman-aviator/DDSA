class Solution {
public:
  int NthRoot(int N, int M) {
       int ans =-1;
       for(int i = 0;i < M;i++){
          if(pow(i,N) == M){
            ans = i;
          }
          else if(pow(i,N) > M){
            break;
          }
       }
       return ans;
    }
};
