#include <iostream>
#include <string>

using namespace std;


class Customer {
    private:
        int invoice;
        bool receipt;
        string name;
    public:
        string getName() {
            return name;
        };
        void printReceipt() {
            if(receipt) {
                cout << "Please grab your receipt below.";
            }
        };
        void finalizeTransaction(Order order) {
            cout << "Your total has come to: " << order.calcTotal();
        };
};


class Cart {
    private: 
        int subTotal;
        Product items[];
    public:
        int calcSubTotal(Product item) {

        };
        void printSubTotal() {

        };
};


class Order {
    private:
        string date;
    public:
        int calcTotal() {

        };
        string getDate() {
            return date;
        };
};


class Inventory {
    private:
        int quantity;
    public:
        int getQuantity() {
            return quantity;
        };
        void setQuantity(int quan) {
            quantity = quan;
        };
        void updateInventory(Product items[]) {

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

