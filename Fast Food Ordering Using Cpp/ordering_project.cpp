#include <iostream>
#include <map>
#include <string>

using namespace std;

void displayMenu(const map<string, double>& menu) {
    cout << "==================== Dinner Menu ====================\n";
    for (const auto& item : menu) {
        cout << item.first << " - $" << item.second << endl;
    }
    cout << "=====================================================\n";
}

int main() {
    map<string, double> menu = {
        {"Pizza", 12.99},
        {"Burger", 10.99},
        {"Pasta", 11.99},
        {"Salad", 8.99},
        {"Dessert", 5.99}
    };

    displayMenu(menu);

    string order;
    double total = 0.0;
    char more = 'y';

    cout << "Welcome to the Dinner Ordering System!\n";

    while (more == 'y') {
        cout << "Enter your order (or type 'done' to finish): ";
        getline(cin, order);

        if (order == "done") {
            break;
        } else if (menu.find(order) != menu.end()) {
            total += menu[order];
            cout << "?? " << order << " added to your order!\n";
        } else {
            cout << "? Sorry, we don't have that item. Please choose from the menu.\n";
        }

        cout << "Would you like to order something else? (y/n): ";
        cin >> more;
        cin.ignore(); // To ignore the newline character left in the buffer
    }

    cout << "==================== Order Summary ====================\n";
    cout << "Total amount due: $" << total << endl;
    cout << "Thank you for your order! Enjoy your meal! ???\n";
    cout << "=====================================================\n";

    return 0;
}



==================== Dinner Menu ====================
Burger - $10.99
Dessert - $5.99
Pasta - $11.99
Pizza - $12.99
Salad - $8.99
=====================================================
Welcome to the Dinner Ordering System!
Enter your order (or type 'done' to finish):