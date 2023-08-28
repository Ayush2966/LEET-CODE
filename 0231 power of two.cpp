// class Solution {
// public:
//     bool isPowerOfTwo(int n) {  
//     if(n<0 || n==0||n%2==1 && n>1){
//         return false;
//     }else if(n==1){
//         return true;
//     }else{
//         while(n>2){
//             n=n/2;
//             if(n%2==1){
//             return false;
//             }
//          }
//          if(n%2==0){
//              return true;
//         }
//       }
//       return false;
//     }
// };
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0) return false;
        while(n%2==0) n/=2;
        return n==1;
    }
};
