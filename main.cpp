
#include <iostream>

class ksztalt
{
private:
    std::string nazwa;
    int pole ;
    int obwod ;
public:
    void toString();
    ksztalt(/* args */);
    ksztalt(std::string a ,int b, int c );
    ~ksztalt();   
};

void ksztalt::toString()
{
 std::cout << nazwa << std::endl ;
 std::cout << pole << std::endl ;
 std::cout << obwod << std::endl ;
}

ksztalt::ksztalt(): nazwa("noname") ,pole(0) , obwod(0){};
ksztalt::~ksztalt(){};                                        //ksztalt

class kwadrat : public ksztalt
{
private:
    std::string nazwa;
    int pole ;
    int obwod ;
    int a ;
public:
    void toString();
    kwadrat();
    ~kwadrat();
};
void kwadrat::toString()
{
 std::cout << nazwa << std::endl ;
 std::cout << "pole to " << pole << std::endl ;
 std::cout << "obwod to " << obwod << std::endl ;
}

kwadrat::kwadrat() : nazwa("kwadrat ") 
{
std::cout << "podaj dlugosc boku" << std::endl ;
std::cin >> a ;
pole = a * a ;
obwod = a * 4 ;
}
kwadrat::~kwadrat(){}

class prostokat : public ksztalt
{
private:
    std::string nazwa;
    int pole ;
    int obwod ;
    int a , b ;
public:
    void toString();
    prostokat();
    prostokat(std::string a ,int b, int c);
    ~prostokat();
};
void prostokat::toString()
{
 std::cout << nazwa << std::endl ;
 std::cout << pole << std::endl ;
 std::cout << obwod << std::endl ;
}

prostokat::prostokat() : nazwa("prostokat") 
{
std::cout << "podaj dlugosc 1 boku " << std::endl ;
std::cin >> a ;
std::cout << "podaj dlugosc 2 boku " << std::endl ;
std::cin >> b ;
pole = a * b ;
obwod =( a * 2 ) + ( b * 2 ) ;
}
prostokat::~prostokat(){}

int main()
{
     //kwadrat a("ala", 22 ,6)  ; //"ala" , 1 , 15
     prostokat a;
      a.toString() ;

    return 0;
}

