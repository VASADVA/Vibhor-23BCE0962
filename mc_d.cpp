#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;

int amount=200000;
string ask2="Yes";
class fooditem
{
    public:
        void menu()
        {
            cout<<"             McD I'M LOVING IT"<<endl;
            string table1[10][5]=
            {
            {"SL.No","\t","  ITEMS","\t\t\t","   PRICE"},
            {"\t\t","\t","\t","VEG(V) "," NON-VEG(NV)"},
            {" 1","\t","Burger(B)","\t\t"," 250      350"},
            {" 2","\t","Medium Pepsi(MP)","\t"," 50"},
            {" 3","\t","Large Pepsi(LP)","\t\t"," 70"},
            {" 4","\t","Wraps(W)","\t\t"," 120      220"},
            {" 5","\t","Medium Fries(MF)","\t"," 70"},
            {" 6","\t","Large Fries(LF)","\t\t"," 90"},
            {" 7","\t","Nuggets(N)","\t\t"," 300      400"}
            };
            for(int i=0;i<9;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table1[i][j];
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
            if(ask1=="VB")
                sum+=n*250;
            else if(ask1=="NVB")
                sum+=n*350;
            else if(ask1=="VW")
                sum+=n*120;
            else if(ask1=="NVW")
                sum+=n*220;
            else if(ask1=="VN")
                sum+=n*300;
            else if(ask1=="NVN")
                sum+=n*400;
            else if(ask1=="MP")
                sum+=n*50;
            else if(ask1=="LP")
                sum+=n*70;
            else if(ask1=="MF")
                sum+=n*70;
            else if(ask1=="LF")
                sum+=n*90;
        }
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
            cout<<"Amount left with you:"<<amount<<endl;
        }

};
int main()
{
    fooditem fd;
    talk t;
    fd.menu();
    cout<<"---------Welcome to McD---------"<<endl;
    t.sale();
    while(ask2=="Yes"){
        t.sale();
    }
    t.bill();
    return 0;
}