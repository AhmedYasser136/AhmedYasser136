int power (int x,int y){
    if(y==1)
    {
        return x;
    }
    else {
        y--;
        return (x* power(x,y));
    }
}
