using namespace std;

class product
{
        private:
                int id;
                string name;
                int quantity;

        public:
                void add_product(){
                        cout<<"Enter the product id\t";
                        cin>>id;
                        cout<<"Enter the product name\t";
                        cin>> name;
                        cout<<"Enter the quantity\t";
                        cin>> quantity;
                }


                void read_product(){
                        cout<<"the product id is: "<<id<<endl;
                        cout<<"the product name is: "<<name<<endl;
                        cout<<"the product quantity is: "<<quantity<<endl;
                }

                int pnum(){
                        return id;
                }

};

product prod;
fstream file;
void Create_pro(){
        file.open("products.txt",ios::out|ios::app);
        prod.add_product();
        file.write((char*)&prod, sizeof(product));
        file.close();
        cout<<"\n the product has been created\n";
}

void show_pro(){
        cout<<"All products"<<endl;
        file.open("products.txt",ios::in);
        while(file.read((char*)&prod, sizeof(product)))
        {
                prod.read_product();
                cout<<"\n *********************************************** \n";
        }
        file.close();
}



void search_pro(int num){
        int f=0;
        file.open("products.txt",ios::in);
        while(file.read((char*)&prod, sizeof(product)))
        {
                if(prod.pnum()==num)
                {
                        prod.read_product();
                        cout<<"\n *********************************************** \n";
                        f=1;
                }
        }
        if(f==0) cout<<"Product not founded"<<endl;

        file.close();
}
