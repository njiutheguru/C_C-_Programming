#include <iostream>
void greaternum(int x, int y, int &k, int  &j)
{
 if (x>y) {
    k=x;
        j=y;
 }
 else {
    k=y;
        j=x;
 }
}

int main(){
    int x, y, k,j;
    std::cout << "Enter two numbers: ";
        
    std::cin >>x >>y;
    greaternum(x, y, k, j);
    std::cout <<k<<" "<<j;
    return 0;

}