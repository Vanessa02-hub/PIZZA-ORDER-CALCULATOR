#include <iostream>

using namespace std;
int NumberOfSmallPizzas;
int NumberOfMediumPizzas;
int NumberOfLargePizzas;
int toppings;
bool yesNo ;
int total;
double cost;
double subtotal;
double priceOfSmallPizza = 80;
double priceOfMediumPizza = 120;
double priceOfLargePizza = 160;
double priceOfExtraToppings = 15;
double deliveryFee ;
const double tax_rate = 0.15;
double tax;
bool deliveryRequired;
void capture()
{
    cout<<"Pizza Hub Order System"<<endl;
    cout<<"Enter number of small pizzas (R80 each):";
    cin>>NumberOfSmallPizzas;
    cout<<"Enter number of meduim pizzas (R120): ";
    cin>>NumberOfMediumPizzas;
    cout<<"Enter number of large pizzas (R160 each): ";
    cin>>NumberOfLargePizzas;
    cout<<"Enter numnber of extra toppings (R15 each): ";
    cin>>toppings;
    cout<<"Delivery required (1 = Yes, 0 = No)?: ";
    cin>>deliveryRequired;
    if  (deliveryRequired == 1){
            deliveryFee = 35;
    }
    else {
        deliveryFee = 0;
    }

}
void display()
{
    cout<<"==========ORDER RECEIPT=========="<<endl;
   priceOfSmallPizza = NumberOfSmallPizzas * priceOfSmallPizza;
    cout<<"Small Pizzas (" << NumberOfSmallPizzas<<") : R"<<priceOfSmallPizza<<endl;
    priceOfMediumPizza  = NumberOfMediumPizzas *priceOfMediumPizza ;
    cout<<"Medium Pizzas (" <<NumberOfMediumPizzas<<"): R"<<priceOfMediumPizza<<endl;
   priceOfLargePizza = NumberOfLargePizzas *  priceOfLargePizza;
    cout<<"Large Pizzas (" <<NumberOfLargePizzas<<"): R"<< priceOfLargePizza<<endl;
    subtotal= priceOfSmallPizza +  priceOfMediumPizza + priceOfLargePizza;
     cout<<"Subtotal: R"<<subtotal<<endl;
    priceOfExtraToppings = toppings * priceOfExtraToppings;
    cout<<"Toppings (" <<toppings<<"): R"<<priceOfExtraToppings<<endl;
    cout<<"Delivery Fee: R"<<deliveryFee<<endl;
    tax = (subtotal + priceOfExtraToppings + deliveryFee) * 0.15;
    cout<<"Tax (15%): R"<<tax<<endl;
    cost =priceOfSmallPizza + priceOfMediumPizza +  priceOfLargePizza + priceOfExtraToppings + deliveryFee + tax;
    cout<<"-----------------------"<<endl;
    cout<<"TOTAL COST: "<<cost<<endl;






}
int main()
{
    capture();
    display();
    return 0;
}
