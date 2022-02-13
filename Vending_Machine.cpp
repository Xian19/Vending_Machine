#include <iostream>

using namespace std;


int choice; //This is the variable for the selection of drink flavour.
int deposit; //This is the variable for the money taken by the machine.
int change; //This is the variable for the change.
int x = 1; //This is a variable that is use to continue the while loop.
int lackMoney; //This holds the amount that the customer needs to pay.
int lack; //This is the amount that the customer paid for the lackMoney variable.
int out =1; //Use for the initial while loop.



//This is the class for all of the functions of the vending machine itself.
//Basically, vendingMachine() is responsible for inputting the cost of the drink.
//moneyChane() is to calculate the change for the payment.
//setMoney() is use to update the amount of money in the machine.
//getMoney() returns the value of the money integer to show the owner.
//getPrice returns the cost of the drink.
//moneyBack is use when the payment is higher than the cost of the drink.
class vendingMachine
{
    public:
        vendingMachine(int price)
        {
            cost = price;
        }
        int moneyChange(int cash, int got)
        {
            setMoney(got);
            change = cash - cost;
            return change;
        }
        void setMoney(int z)
        {
            money += z;
        }
        int getPrice()
        {
            return cost;
        }
        int getMoney()
        {
          return money;
        }
        void moneyBack(int m, int n)
        {
            cout<<"You have deposited $"<<m<<". Here is your change: $";
            moneyChange(m,n);
            cout<<change<<endl;
            cout<<"Please get your drink below! Thank you!"<<endl;
        }
    private:
        int money = 500;
        int cost;
};


//This is basically just the opening text for the customer. It also lists down the beverages.
int displayScreen()
{
    cout<<"Please choose your beverage: [1] Apple Juice [2] Orange Juice [3] Grape Juice [4] Check Profit [5] Exit."<<endl;
    cin>>choice;
    return choice;
}


int main()
{
  cout<<"Welcome customer!"<<endl;
  while (out == 1)
  {
    displayScreen();
    switch(choice)
    {
        case 1: //This is the loop if the customer chooses the apple flavor.
        {
          vendingMachine appleJuice(25);

          cout<<"That would be $"<< appleJuice.getPrice() <<". Please deposit it in the machine: "<<endl;
          cin>>deposit;
          if(deposit > appleJuice.getPrice())
          { 
            appleJuice.moneyBack(deposit,appleJuice.getPrice());
            break;
          }
          else if(deposit < appleJuice.getPrice())
          {
            lackMoney = appleJuice.getPrice() - deposit;
            while (x == 1)
            {
               cout<<"You have inserted an insufficient amount. Please deposit $"<<lackMoney<<" to continue. "<<endl;
               cin>>lack;
               if(lack == lackMoney)
               {
                   cout<<"Please get your drink below! Thank you!"<<endl;
                   x = 0;
               }
               else if (lack > lackMoney)
               {
                   appleJuice.moneyBack(lack,appleJuice.getPrice());  
               }
               else
               {
                   lackMoney -= lack;
               }
            }
          }
          else
          {
            cout<<"Please get your drink below! Thank you!"<<endl;
            appleJuice.setMoney(appleJuice.getPrice());
            break;
          }
          break;
        }
        case 2: //This is the loop if the customer chooses the orange flavor.
        {
          vendingMachine orangeJuice(30);

          cout<<"That would be $"<< orangeJuice.getPrice() <<". Please deposit it in the machine: "<<endl;
          cin>>deposit;
          if(deposit > orangeJuice.getPrice())
          { 
            orangeJuice.moneyBack(deposit,orangeJuice.getPrice());
            break;
          }
          else if(deposit < orangeJuice.getPrice())
          {
            lackMoney = orangeJuice.getPrice() - deposit;
            while (x == 1)
            {
               cout<<"You have inserted an insufficient amount. Please deposit $"<<lackMoney<<" to continue. "<<endl;
               cin>>lack;
               if(lack == lackMoney)
               {
                   cout<<"Please get your drink below! Thank you!"<<endl;
                   x = 0;
               }
               else if (lack > lackMoney)
               {
                   orangeJuice.moneyBack(lack,orangeJuice.getPrice());  
               }
               else
               {
                   lackMoney -= lack;
               }
            }
          }
          else
          {
            cout<<"Please get your drink below! Thank you!"<<endl;
            orangeJuice.setMoney(orangeJuice.getPrice());
            break;
          }
          break;
        }
        case 3: //This is the loop if the customer chooses the grape flavor.
        {
          vendingMachine grapeJuice(50);

          cout<<"That would be $"<< grapeJuice.getPrice() <<". Please deposit it in the machine: "<<endl;
          cin>>deposit;
          if(deposit > grapeJuice.getPrice())
          { 
            grapeJuice.moneyBack(deposit,grapeJuice.getPrice());
            break;
          }
          else if(deposit < grapeJuice.getPrice())
          {
            lackMoney = grapeJuice.getPrice() - deposit;
            while (x == 1)
            {
               cout<<"You have inserted an insufficient amount. Please deposit $"<<lackMoney<<" to continue. "<<endl;
               cin>>lack;
               if(lack == lackMoney)
               {
                   cout<<"Please get your drink below! Thank you!"<<endl;
                   x = 0;
               }
               else if (lack > lackMoney)
               {
                   grapeJuice.moneyBack(lack,grapeJuice.getPrice());  
               }
               else
               {
                   lackMoney -= lack;
               }
            }
          }
          else
          {
            cout<<"Please get your drink below! Thank you!"<<endl;
            grapeJuice.setMoney(grapeJuice.getPrice());
            break;
          }
          break;
        }
        case 4:
        {
          vendingMachine appleJuice(25);
          cout<<"The amount of money collected is: $"<<appleJuice.getMoney()<<endl;
          break;
        }
        case 5:
        {
          out = 0;
        }
           

    }
  }

    return 0;


}