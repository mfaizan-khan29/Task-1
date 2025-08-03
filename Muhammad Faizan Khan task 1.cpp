#include <iostream>
using namespace std;
int main()
{
    string items[7] = {"Burger", "Rice", "Pizza", "Biryani", "Sandwich", "Fries", "Cold Drink"};
    int prices[7] = {200, 300, 500, 250, 150, 100, 80};
    int choice1, choice2, choice3;
    int qty1, qty2, qty3;
    int total1, total2, total3, finalTotal;
    cout << "Menu:\n";
    cout << "1. Burger - Rs.200\n";
    cout << "2. Rice - Rs.300\n";
    cout << "3. Pizza - Rs.500\n";
    cout << "4. Biryani - Rs.250\n";
    cout << "5. Sandwich - Rs.150\n";
    cout << "6. Fries - Rs.100\n";
    cout << "7. Cold Drink - Rs.80\n";
    cout << "\nSelect first item (1 to 7): ";
    cin >> choice1;
    cout << "Enter quantity: ";
    cin >> qty1;
    cout << "Select second item (1 to 7): ";
    cin >> choice2;
    cout << "Enter quantity: ";
    cin >> qty2;
    cout << "Select third item (1 to 7): ";
    cin >> choice3;
    cout << "Enter quantity: ";
    cin >> qty3;
    total1 = prices[choice1 - 1] * qty1;
    total2 = prices[choice2 - 1] * qty2;
    total3 = prices[choice3 - 1] * qty3;
    finalTotal = total1 + total2 + total3;
    cout << "\n----- Bill Summary -----\n";
    cout << items[choice1 - 1] << " x " << qty1 << " = Rs." << total1 << endl;
    cout << items[choice2 - 1] << " x " << qty2 << " = Rs." << total2 << endl;
    cout << items[choice3 - 1] << " x " << qty3 << " = Rs." << total3 << endl;
    cout << "\nTotal Amount = Rs." << finalTotal << endl;
    cout << "Thanks for your order!\n";
    return 0;
}
