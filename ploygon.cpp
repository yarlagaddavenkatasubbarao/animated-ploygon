#include<simplecpp>

main_program{
turtleSim();
cout<<"Enter the nnumber of sides";
int nsides;
cin>> nsides;
repeat(nsides){
forward(100); right(360.0/nsides);
wait(2);
}
wait(10);
}
