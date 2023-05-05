#include<iostream>

using namespace std;

class orders{//absract class
protected://Encapsulation access specifiers is protected
    double cost[4];
    int piec[4];
public:
    orders() {
        piec[0] = 0;
        piec[1] = 0;
        piec[2] = 0;
        piec[3] = 0;
        cost[0] = 0;
        cost[1] = 0;
        cost[2] = 0;
        cost[3] = 0;
       
    }    virtual void buy() {};//virtual function
    virtual void show() {};

};
class meal :public orders {//inhertance where class meal inherate all virable 
                                  //from absrract class"order"
public:
    void buy() //public fuction
    {
        cout << "welcome in food section" << endl;
        cout << "1-pizza" << endl;
        cout << "2- big mac " << endl;
        cout << "3- Steak " << endl;

        int x = 0;
        cin >> x;
        if (x == 1) {
            cout << "how many meal you need" << endl;
            cin >> piec[0];
            cost[0] = cost[0] + piec[0] * 90;
        }
        else if (x == 2) {
            cout << "how many meal you need" << endl;
            cin >> piec[1];
            cost[1] = cost[1] + piec[1] * 60;

        }
        else if (x == 3) {
            cout << "how many meal you need" << endl;
            cin >> piec[2];
            cost[2] = cost[2] + piec[2] * 120;
        }
        
        else if (x == 0) {
            exit;
        }
        else if (x != 1 || x != 2 || x != 3 || x != 0)
        {
            cout << "non available request  try again" << endl;
            buy();
        }
    }
    void show() {//public function
        if (piec[0] > 0) {
            cout << "-pizza" << endl;
            cout << "price" << cost[0] << "EL" << endl;
        }
        if (piec[1] > 0) {
            cout << " big mack" << endl;
            cout << "price" << cost[1] << "EL" << endl;
        }
        if (piec[2] > 0) {
            cout << "steack" << endl;
            cout << "price" << cost[2] << "EL" << endl;
        }
    }
};
class drink :public orders {//inhertance where class drink inherate all virable 
    //from absrract class"order"
public:
    void buy() {//public function
        cout << "        welcome in drink sec " << endl;
        cout << "1-coka" << endl;
        cout << "2- milk shake"<< endl;
        cout << "3-cocktail juice" << endl;
        cout << "press 0 to exit" << endl;
        int x = 0;
        cin >> x;
        if (x == 1) {
            cout << "how many drink you need" << endl;
            cin >> piec[0];
            cost[0] = cost[0] + piec[0] * 15;
        }
        else if (x == 2) {
            cout << "how many drink you need" << endl;
            cin >> piec[1];
            cost[1] = cost[1] + piec[1] *30;

        }
        else if (x == 3) {
            cout << "how many drink you need" << endl;
            cin >> piec[2];
            cost[2] = cost[2] + piec[2] * 25;
        }
      
        else if (x == 0) {
            exit;
        }
        else if (x != 1 || x != 2  || x != 0)
        {
            cout << "non available request  try again" << endl;
            buy();
        }
    }
    void show() {//public function
        if (piec[0] > 0) {
            cout << "- coka" << endl;
            cout << "price:" << cost[0] << " EL" << endl;
        }
        if (piec[1] > 0) {
            cout << " milkshacke" << endl;
            cout << "price:" << cost[1] << " EL" << endl;
        }
        if (piec[2] > 0) {
            cout << " cocktail juice" << endl;
            cout << "price:" << cost[2] << " EL" << endl;;
        
        }
    }
};

void move() {//public function
    drink k;
    meal m;
    

    cout << endl;
    cout << "_";
    cout << "0 to exit" << endl;
    cout << "1-oder meal" << endl;
    cout << "2-order drink " << endl;
   
    int i = 0;
    cin >> i;
    if (i == 1) {
       m.buy();
        m.show();
        move();//recursion
    }
    else if (i == 2) {
       k.buy();
        k.show();
        move();
    }
    
}
int main() {
    orders* ptrk, * ptrm;//pointer of class main_ibrary
   meal mmm;//object
    drink kkk;//.........
   
    ptrm = &mmm; //pointer points on object
    ptrk = &kkk;//pointer points on object
   

    cout << "\t\twelcome in GGH restaurant " << endl;
   
    cout << "(1)_food sec" << endl;
    cout << "(2)-drink sec" << endl;
  
    cout << "(0)- to exit " << endl;
    int x;
    cin >> x;
    if (x == 0) {
        exit;
    }
    else if (x == 1) {
        ptrm->buy();
        ptrm->show();
        cout << "if you want to move to another department press 1" << endl;
        int i = 0;
        cin >> i;
        if (i == 1)
            move();
    }
    else if (x == 2) {
        ptrk->buy();
        ptrk->show();
        cout << "if you want to move to another department press 1" << endl;
        int i = 0;
        cin >> i;
        if (i == 1)
            move();
    
   
    }
    else if (x != 1 || x != 2  || x != 0) {
        cout << "non available request" << endl;
        main();//rucurion
    }
}
