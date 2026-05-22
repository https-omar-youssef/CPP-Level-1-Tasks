#include <iostream>
using namespace std;

enum enColor {Black=1, Wight=2, Blue=3, Perpel=4};
enum enModel {Nversion, Oversion};
enum enType {HatchBack, Sedan, Sport, SuperSport};


struct stCarModel
{
    string Model;
    string TypeOfMechanic;
    
};

struct stBody
{
    int waight;
    int year_model;
    int passengers_numbers;
    stCarModel Car_Model;
};

struct stCarSructure
{
    int Car_CC;
    string PowrType;
    string MechanicType;

    stBody Body_Structure;
};


int main()

{

    stCarSructure Car;


    Car.Body_Structure.Car_Model.Model = "TOYTA";
    Car.Body_Structure.Car_Model.TypeOfMechanic = "Electric";
    Car.Body_Structure.passengers_numbers = 8;
    Car.Body_Structure.waight = 2000;
    Car.Body_Structure.year_model = 2023;
    Car.Car_CC = 7000;
    Car.MechanicType = "electric";
    Car.PowrType = "Anal";

    cout << Car.Body_Structure.Car_Model.Model << endl;


            return 0;

}

