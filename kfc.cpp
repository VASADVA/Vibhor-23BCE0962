#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int amount=20000;
string ask2="Yes";
class fooditem
{
    public:
        void menu()
        {
            cout<<"     KFC IT'S FINGER LICKIN' GOOD!"<<endl;
            string table[9][5]=
            {
            {"SL.No","\t","  ITEMS","\t\t\t","PRICE"},

            {" 1","\t","Chicken Burger(CB)","\t"," 250"},
            {" 2","\t","Medium Pepsi(MP)","\t"," 50"},
            {" 3","\t","Large Pepsi(LP)","\t\t"," 70"},
            {" 4","\t","Chicken Wraps(CW)","\t"," 120"},
            {" 5","\t","Medium Fries(MF)","\t"," 70"},
            {" 6","\t","Large Fries(LF)","\t\t"," 90"},
            {" 7","\t","Chicken Nuggets(CN)","\t"," 300"}
            };
            for(int i=0;i<9;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
};
class talk
{
    public:
        string ask1,a,ask;
        int sum=0,n,n1;
        void price(string a,int n)
        {
            if(a=="CB")
            {
                sum+=n*250;
            }
            else if(a=="MP")
            {
                sum+=n*50;
            }
            else if(a=="LP")
            {
                sum+=n*70;
            }
            else if(a=="CW")
            {
                sum+=n*120;
            }
            else if(a=="MF")
            {
                sum+=n*70;
            }
            else if(a=="LF")
            {
                sum+=n*90;
            }
            else if(a=="CN")
            {
                sum+=n*300;
            }
        }

        void bill()
        {
            cout<<"Your total bill is:"<<sum<<endl;
                time_t currentTime = time(nullptr);
                tm* localTime = localtime(&currentTime);
                cout
                  << localTime->tm_hour << ":"
                  << localTime->tm_min << ":"
                  << localTime->tm_sec <<endl;
            amount=amount-sum;
            cout<<"Amount left with you:"<<amount<<endl;}
        void sale()
        {
            cout<<"What would you like to have ";cin>>ask1;
            if(ask1=="P")
            {
                cout<<"Medium or Large"<<endl;
                cout<<"I would like a ";cin>>ask1;
            }
            if(ask1=="F")
            {
                cout<<"Medium or Large"<<endl;
                cout<<"I would like a ";cin>>ask1;
            }
            cout<<"How many would you like to have ";cin>>n;
            price(ask1,n);
            cout<<"Would you like to order more ";cin>>ask2;
        }
};
int main()
{
    fooditem fd;
    talk t;
    fd.menu();
    cout<<"---------Welcome to KFC---------"<<endl;
    t.sale();
    while(ask2=="Yes"){
        t.sale();
    }
    t.bill();
    return 0;
}