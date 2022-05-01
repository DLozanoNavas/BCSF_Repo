
int main(int argc, char **argv){

    int a = 10;
    int b = 15;
    int c = a * b;
    int d = c / a;
    int e = d & b;

    d *= d + b;

    if(d >= a){

        do{
            d--;
        } while (d<a);
    }


    while(d<a){

        d++;
    }




}

