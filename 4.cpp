#include <iostream>
using namespace std;

int main() {
    int itemNo, quantity;
    float unitPrice, total, discount, finalAmount;

    cout << "Enter item number: ";
    cin >> itemNo;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    total = quantity * unitPrice;
    discount = 0.20 * total;
    finalAmount = total - discount;

    cout << "\nItem Number: " << itemNo << endl;
    cout << "Total Amount: " << total << endl;
    cout << "Discount (20%): " << discount << endl;
    cout << "Final Bill Amount: " << finalAmount << endl;

    return 0;
}
