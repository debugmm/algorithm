//square root

//force square root
double forceSqrt(double num,double step){

   if(num<0){
       return -1;
   }

   double res=0.0;
   while((res * res) < num){
       res=res+step;
   }

   return res;
}

//dichotomy
double dichotomySqrt(double num,double step){
    
    if(num<0){
        return -1;
    }

    double last=0.0;
    double low=0.0;
    double up= num>=1 ? num : 1;
    double mid=(up+low)/2.0;

    do{

        if((mid * mid)<num){
            low=mid;
        }
        else{
            up=mid;
        }

        last=mid;
        mid=(up+low)/2.0;

    }while(fabs(mid-last)>step);

    return mid;
}

//Newton's method
double newTonSqrt(double num){

    if(num<0){
        return -1;
    }

    double x=num,y=0.0;

    while(fabs(x-y)>0.00001){
        y=x;
        x=0.5*(x+num/x);
    }

    return x;
}