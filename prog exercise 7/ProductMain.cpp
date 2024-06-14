#include <iostream>
#include <string>
#include "ProductInventory.h"

using namespace std;

int main(){
    string name, brand, description, size, color, category, material, model, warranty, tech_specs;
    float price;
    int quantity;

    Clothing clothing;
    Electronics electronics;

    cout << "Welcome to the Product Inventory!" << endl;
    cout << "Please enter the following information to add a product to the inventory." << endl;
    cout << "The following must be collected: " << endl << endl;

    cout << "Name: ";
    getline(cin, name);
    clothing.setName(name);
    electronics.setName(name);

    cout << "Brand: ";
    getline(cin, brand);
    clothing.setBrand(brand);
    electronics.setBrand(brand);

    cout << "Price: ";
    cin >> price;
    clothing.setPrice(price);
    electronics.setPrice(price);

    cout << "Quantity: ";
    cin >> quantity;
    clothing.setQuantity(quantity);
    electronics.setQuantity(quantity);

    cout << "Description: ";
    cin.ignore();
    getline(cin, description);
    clothing.setDescription(description);
    electronics.setDescription(description);

    cout << "Size: ";
    getline(cin, size);
    clothing.setSize(size);
    electronics.setSize(size);

    cout << "Color: ";
    getline(cin, color);
    clothing.setColor(color);
    electronics.setColor(color);

    cout << "Category: ";
    getline(cin, category);
    clothing.setCategory(category);
    electronics.setCategory(category);

    cout << "Assume product is both electronic and clothing" << endl;
    cout << "PRODUCT ATTRIBUTES: " << endl;

    cout << "Material: ";
    getline(cin, material);
    clothing.setMaterial(material);

    cout << "ELECTRONIC ATTRIBUTES: " << endl;

    cout << "Model: ";
    getline(cin, model);
    electronics.setModel(model);

    cout << "Warranty: ";
    getline(cin, warranty);
    electronics.setWarranty(warranty);

    cout << "Technical Specifications: ";
    getline(cin, tech_specs);
    electronics.setTechnical_specs(tech_specs);

    cout << "\nThe product " << clothing.getName() << " has been added to the inventory." << endl;
    cout << "The product details provided are as follows: " << endl;

    cout << "Name: " << clothing.getName() << endl;
    cout << "Brand: " << clothing.getBrand() << endl;
    cout << "Price: " << clothing.getPrice() << endl;
    cout << "Quantity: " << clothing.getQuantity() << endl;
    cout << "Description: " << clothing.getDescription() << endl;
    cout << "Size: " << clothing.getSize() << endl;
    cout << "Color: " << clothing.getColor() << endl;
    cout << "Category: " << clothing.getCategory() << endl;
    cout << "Material: " << clothing.getMaterial() << endl << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

    cout << "Name: " << clothing.getName() << endl;
    cout << "Brand: " << clothing.getBrand() << endl;
    cout << "Price: " << clothing.getPrice() << endl;
    cout << "Quantity: " << clothing.getQuantity() << endl;
    cout << "Description: " << clothing.getDescription() << endl;
    cout << "Size: " << clothing.getSize() << endl;
    cout << "Color: " << clothing.getColor() << endl;
    cout << "Category: " << clothing.getCategory() << endl;
    cout << "Model: " << electronics.getModel() << endl;
    cout << "Warranty: " << electronics.getWarranty() << endl;
    cout << "Technical Specifications: " << electronics.getTechnical_specs() << endl;
}
