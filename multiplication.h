float mul_using_addition(float x, float y)
{
    int i;
    float sum = 0;
    for (i = 1; i <= y; i++)
    {
        sum = sum + x;
    }
    return sum;
}


float multiply(float a,float b){
  
    float b_integer = (int)b;
    float b_decimal = b - b_integer;

    float temp = mul_using_addition(a,b_integer);
    float temp2 = mul_using_addition(b_decimal,100);

    float temp3 = mul_using_addition(a,temp2);
    float temp4 = temp3/100;

    return temp+temp4;
}
