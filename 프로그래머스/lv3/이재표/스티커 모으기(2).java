import java.util.*;
class Solution {
    int max=0;
    int n;
    public int solution(int sticker[]) {
        int n=sticker.length;
        int[]dp1=new int[n];
        int[]dp2=new int[n];
        if(n==1){
            return sticker[0];
        }
        dp1[0]=sticker[0];
        dp1[1]=sticker[0];
        for(int i=2;i<n-1;i++){
            dp1[i]=Math.max(dp1[i-2]+sticker[i],Math.max(dp1[i-2],dp1[i-1]));
        }
        dp2[0]=0;
        dp2[1]=sticker[1];
        for(int i=2;i<n;i++){
            dp2[i]=Math.max(dp2[i-2]+sticker[i],Math.max(dp2[i-2],dp2[i-1]));
        }
        
        return Math.max(dp1[n-2], dp2[n-1]);
    }
}
