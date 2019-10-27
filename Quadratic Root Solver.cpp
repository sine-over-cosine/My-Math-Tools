#include <iostream>
#include <math.h>

using namespace std;

void initialise_quadratic_curve(double a, double b, double c){
    cout<<"You have just initialised the following quadratic curve"<<endl;
    cout<<a<<"x^2 + "<<b<<"x +"<<c<<" = 0"<<endl;
}

int check_discriminant(double a, double b, double c){
    double discriminant=pow(b,2)-4*a*c;
    if (discriminant >0){
        return 2;
    }
    else if (discriminant==0){
        return 1;
    }
    else{
        return 0;
    }
}

void quadratic_solve(double a, double b, double c){
    initialise_quadratic_curve(a,b,c);
    double discriminant=pow(b,2)-4*a*c;
    cout<<"System detects "<<check_discriminant(a,b,c)<<" real roots"<<endl;
    if(check_discriminant(a,b,c)==2){
        cout<<"There are 2 real roots of the equation, they are.."<<endl;
        double first_root=(-1*b+sqrt(discriminant))/(2*a);
        double second_root=(-1*b-sqrt(discriminant))/(2*a);
        cout<<first_root<<" and "<<second_root<<endl;
    }
    else if(check_discriminant(a,b,c)==1){
        cout<<"There is 1 real root of the equation, it is.."<<endl;
        double first_root=(-1*b)/(2*a);
        cout<<first_root<<endl;
    }
    else{
        cout<<"There are no real roots of the equation, but there are a pair of complex conjugates, they are.."<<endl;
        double new_disc=sqrt(-1*discriminant);
        double imaginary_part=abs(new_disc/(2*a));
        double real_part=(-1*b)/(2*a);
        cout<<real_part<<"+"<<imaginary_part<<"i and "<<real_part<<"-"<<imaginary_part<<"i"<<endl;
    }
}

int main(){
    double a;
    double b;
    double c;
    cin>>a;
    cin>>b;
    cin>>c;
    quadratic_solve(a,b,c);
    //cout<<sin(3.1415826)<<endl;
    return 0;
}