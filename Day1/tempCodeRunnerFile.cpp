
    public:
     int gcd(int a, int b){
        if(a==0)
          return b;
        else if(b==0)
          return b;
        if(a>b)
          return gcd(a%b,b);
        else{
          return gcd(a,b%a);
        }