#include <iostream>
#include <string>

using namespace std;

class Product {
    private:
        string name;
        string brand;
        float price;
        int quantity;
        string description;
        string size;
        string color;
        string category;

    public:
        Product(){}
        
        Product(string n, string b, float p, int q, string d, string s, string c, string cat){
            name = n;
            brand = b;
            price = p;
            quantity = q;
            description = d;
            size = s;
            color = c;
            category = cat;
        }

        void setName(string n){
            name = n;
        }

        void setBrand(string b){
            brand = b;
        }

        void setPrice(float p){
            price = p;
        }

        void setQuantity(int q){
            quantity = q;
        }

        void setDescription(string d){
            description = d;
        }

        void setSize(string s){
            size = s;
        }

        void setColor(string c){
            color = c;
        }

        void setCategory(string cat){
            category = cat;
        }

        string getName(){
            return name;
        }

        string getBrand(){
            return brand;
        }

        float getPrice(){
            return price;
        }

        int getQuantity(){
            return quantity;
        }

        string getDescription(){
            return description;
        }

        string getSize(){
            return size;
        }

        string getColor(){
            return color;
        }

        string getCategory(){
            return category;
        }
};

class Clothing : public Product {
    private:
        string material;

    public:
        Clothing(){}

        Clothing(string n, string b, float p, int q, string d, string s, string c, string cat, string m) : Product(n, b, p, q, d, s, c, cat){
            material = m;
        }

        void setMaterial(string m){
            material = m;
        }

        string getMaterial(){
            return material;
        }
};

class Electronics : public Product {
    private:
        string Model;
        string Warranty;
        string technical_specs;

    public:
        Electronics(){}

        Electronics(string n, string b, float p, int q, string d, string s, string c, string cat, string m, string w, string t) : Product(n, b, p, q, d, s, c, cat){
            Model = m;
            Warranty = w;
            technical_specs = t;
        }

        void setModel(string m){
            Model = m;
        }

        void setWarranty(string w){
            Warranty = w;
        }

        void setTechnical_specs(string t){
            technical_specs = t;
        }

        string getModel(){
            return Model;
        }

        string getWarranty(){
            return Warranty;
        }

        string getTechnical_specs(){
            return technical_specs;
        }
};