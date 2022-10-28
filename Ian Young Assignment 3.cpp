#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Customer {
    private:
        int invoice;
        bool receipt;
        string name;
        Cart custCart;
        vector<Order> orders;

        void printReceipt() {
            if(receipt) {
                cout << "Please grab your receipt below.";
            }
        };

    public:
        string getName() {
            return name;
        };

        void finalizeTransaction(Order order) {
            cout << "Your total has come to: " << order.calcTotal(custCart.calcSubTotal(), 7);
            printReceipt();
        };

        Cart getCart() {
            return custCart;
        };

        vector<Order> getOrders() {
            return orders;
        }
};


class Cart {
    private: 
        int subTotal;
        vector<Product> items;
    public:
        int calcSubTotal() {
            int subTotal;
            for (int i = 0; i < items.size(); i++) {
                subTotal += items[i].getPrice();
            }
            return subTotal;
        };

        void printSubTotal() {
            cout << "The subtotal is: " << calcSubTotal();
        };
};


class Order {
    private:
        string date;
    public:
        int calcTotal(int subTotal, int tax) {
            int total = (subTotal * tax/10) + subTotal;
            return total;
        };

        string getDate() {
            return date;
        };
};


class Inventory {
    private:
        int quantity = 0;
        vector<Product> stock;
    public:
        int getQuantity() {
            return quantity;
        };

        void setQuantity(int quan) {
            quantity = quan;
        };

        void updateInventory(Product items[]) {

        };

        vector<Product> getInventory() {
            return stock;
        };

        void updateInventory(vector<Product> newItems) {
            for (int i = 0; i < newItems.size(); i++) {
                stock.push_back(newItems[i]);
            }
        };
};


class Product {
// Acts as an Interface
    private:
        string name;
        int price;
        int quantity;
    public:
        string getName() {
            return name;
        };

        int getPrice() {
            return price;
        };

        int getQuantity() {
            return quantity;
        };

        void setQuantity(int quan) {
            quantity = quan;
        };
};


class Apple : Product{
    private:
        string color = "red";
    public:
        string getColor() {
            return color;
        };
};


class Banana : Product{
    private:
        int shelfLife = 10;
    public:
        int getShelfLife() {
            return shelfLife;
        };
};


class Orange : Product{
    private:
        int size;
    public:
        int getSize() {
            return size;
        }
};


int main() {

    return 0;
}

