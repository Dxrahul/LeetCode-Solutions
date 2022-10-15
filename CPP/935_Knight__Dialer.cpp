public:
    int knightDialer(int n) {
        if(n==1)
            return 10;
        int mod = pow(10, 9) + 7;
        vectora(10,1), b(10);
        for(int i=0;i<10;i++)
            b[i]=1;
        int i=1;
        long long sum=0;
        n--;
        while(n--){
            sum=0;
            sum+=a[0]=(b[4]+b[6])%mod;
            sum+=a[1]=(b[8]+b[6])%mod;
            sum+=a[2]=(b[9]+b[7])%mod;
            sum+=a[3]=(b[4]+b[8])%mod;
            sum+=a[4]=(b[3]+b[9]+b[0])%mod;
            sum+=a[5]=0;
            sum+=a[6]=(b[1]+b[7]+b[0])%mod;
            sum+=a[7]=(b[2]+b[6])%mod;
            sum+=a[8]=(b[1]+b[3])%mod;
            sum+=a[9]=(b[4]+b[2])%mod;
            b=a;
            i++;
        }
        return sum%mod;
        
    }
};
