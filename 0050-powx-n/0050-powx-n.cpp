class Solution {
public:
double power(double x,int n){
    if(n==0){
        return 1;
    }
    double method=power(x,n/2);
    if(n%2==0){
        return method*method;
    }
    else return method*method*x;
}
    double myPow(double x, int n) {
        long long N=n;
        bool flag=(N>=0);
        double ans= power(x,abs(N));
        if(flag==false) ans= 1/ans;
        return ans;
    }
};