#include<iostream>
using namespace std;
class InventoryItem{
    int productId,quantity;
    double unitprice;
    public:
    InventoryItem(int id,double price,int qty){
        productId=id;
        quantity=qty;
        unitprice=price;
    }
    InventoryItem operator+(const InventoryItem& item){
        if(productId==item.productId && unitprice==item.unitprice){
            return InventoryItem(productId,unitprice,quantity+item.quantity);
        }
        cout<<"Incompatible inventory item!"<<endl;
        return *this;
    }
    void display(){
        cout<<"Product ID : "<<productId<<"unit Price : "<<unitprice<<"Quantity : "<<quantity;
    }
};
int main(){
    InventoryItem i1(101,50.0,10);
    InventoryItem i2(105,60.0,11);
    InventoryItem i3(108,70.0,12);
    InventoryItem i4 = i1+i2;
    cout<<"Combined inventory "<<endl;
    i4.display();
    InventoryItem i5 = i1+i3;
    cout<<"Combined inventory "<<endl;
    i5.display();
    return 0;
}