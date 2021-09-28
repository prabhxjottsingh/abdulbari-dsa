A recursive Function is given and is called for f(1), Write it answer

int f(int n){
    static int i=1;
    if(n>=5){
        return n;
    }
    n = n+i;
    i++;
    return (f(n));
}


ANSWER: 7