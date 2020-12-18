#include <iostream>
using namespace std;

int main() {
double product1 = 2.98, product2 = 4.50, product3 = 9.98, product4 = 4.49, product5 = 6.87, total = 0;
unsigned int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
int n = 0;

while (n != -1) {

cout << "Product 1: $2.98 Product 2: $4.50 Product 3: $9.98 Product 4: $4.49 Product 5: 6.87" << endl;
cout << "Enter a product number you want to purchase or enter -1 to exit ";
cin >> n;

switch (n)
{
case 1:
cnt1++;
total += product1;
break;
case 2:
cnt2++;
total += product2;
break;
case 3:
cnt3++;
total += product3;
break;
case 4:
cnt4++;
total += product4;
break;
case 5:
cnt5++;
total += product5;
break;
default:
cout << "invalid input" << endl;
}
}

cout << "The quantities of product you purchased are:" << endl << "Product 1: " << cnt1 << " Product 2: " << cnt2 << " Product 3: "
<< cnt3 << " Product 4: " << cnt4 << " Product 5: " << cnt5 << endl << "The total price is: " << total << endl;
return 0;
}
