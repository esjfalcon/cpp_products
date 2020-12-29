#include <fstream>
#include <iostream>
#include <string>
#include "products.h"




int main(){

        int ch;
        bool q=false;

        while(!q){
                int num;
                cout<<"by oussama essaji\n";
                cout<<"\t Main Menu\n";
                cout<<"1- Add Product\n";
                cout<<"2- Show Products\n";
                cout<<"3- Search for Product\n";
                cout<<"4- Quit\n";
                cin>> ch;
                switch(ch){
                        case 1:
                                Create_pro();
                                break;

                        case 2:
                                show_pro();
                                break;

                        case 3:
                                cout<<"Enter the id: \t"; cin>>num;
                                search_pro(num);
                                break;

                        case 4:
                                q=true;
                                break;
                }

        }

}
