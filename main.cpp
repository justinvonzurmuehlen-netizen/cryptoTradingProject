#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType orderType;
};


void printMenu()
{
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
}

void printHelp()
{
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions" << std::endl;
}

void printExchangeStats()
{
    std::cout << "Exchange stats:" << std::endl;
}

void placeAnAsk()
{
    std::cout << "Placing an ask..." << std::endl;
}

void placeABid()
{
    std::cout << "Placing a bid..." << std::endl;
}

void printWallet()
{
    std::cout << "Wallet contents:" << std::endl;
}

void continueProgram()
{
    std::cout << "Continuing..." << std::endl;
}

void gotoNextStep()
{
    std::cout << "Going to the next step..." << std::endl;
}

int getChoice()
{
    int userOption;
    std::cout << "Enter 1-6: " << std::endl;
    std::cin >> userOption;
    return userOption;
}

void processUserOption(int userOption)
{
    switch (userOption)
    {
        case 1:
            printHelp();
            break;
        case 2:
            printExchangeStats();
            break;
        case 3:
            placeAnAsk();
            break;
        case 4:
            placeABid();
            break;
        case 5:
            printWallet();
            break;
        case 6:
            continueProgram();
            break;
        default:
            std::cout << "Invalid option. Please choose 1-6." << std::endl;
            break; 
    }


}

int main ()
{
    double price = 5319.450228; 
    double amount = 0.00020075;
    
    

    //std::string timeStamp{"2020/03/17 17:01:24.884492"};
    //std::string product{"BTC/USDT"};
    //std::string orderType{"bid"};
    //OrderBookType orderType = OrderBookType::bid;

    std::vector<double> prices;
    std::vector<double> amounts;
    std::vector<std::string> timestamps;
    std::vector<std::string> products;
    std::vector<OrderBookType> orderTypes;

    prices.push_back(5000.01);
    amounts.push_back(0.0001);
    timestamps.push_back("2020/03/17 17:01:24.884492");
    products.push_back("BTC/USDT");
    orderTypes.push_back(OrderBookType::bid);

    std::cout<< "prices: " << prices[0] << std::endl;


    // while (true)
    // {
    //     printMenu();
    //     int userOption = getChoice();
    //     std::cout << "You chose " << userOption << std::endl;
    //     processUserOption(userOption);
    // }


    OrderBookEntry order1;
    order1.price = 10000;
    order1.amount = 0.002;
    order1.timestamp = "2020/03/17 17:01:24.884492";
    order1.product = "BTC/USDT";
    order1.orderType = OrderBookType::bid;
    return 0;
}