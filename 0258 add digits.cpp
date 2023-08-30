lass Solution {
public:
    int addDigits(int num) {
    //     int sum = 0;
    //     while(num>9){
    //        while(num){
    //            sum += (num%10);
    //            num/=10;
    //        }
    //        num =sum; 
    //        sum = 0;
    //     }
    //     return num;
    int sum= 0;
    while(num){
        sum += (num%10);
        num /= 10;        
    }
    if(sum<10){
        return sum;
    }else{
        return addDigits(sum);
    }
    }
};
