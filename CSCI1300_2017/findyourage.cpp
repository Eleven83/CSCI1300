#include <iostream>

/**
 * Algorithm:
 *
 * Ask user for their birth month and Year
 * Ask user for current month and Year
 * Calcualte difference in years
 * Calculate difference in months
 * @return
 */
int main() {
    int birthMonth;
    int birthYear;
    int currentMonth;
    int currentYear;
    std::cout << "Hello!" << std::endl;
    std::cout << "I can calculate your age for you, but I need some information first!" << std::endl;


    std::cout<<"Enter Your Birth Year(Eg:1989):";
    std::cin>>birthYear;
    std::cout<<"\n\nEnter Your Birth Month as a number (Eg:for July enter 7):";
    std::cin>>birthMonth;
    std::cout<<"\nEnter The Current Month(Eg:7):";
    std::cin>>currentMonth;
    std::cout<<"\nEnter The Current Year(Eg:2017):";
    std::cin>>currentYear;
    int agey=currentYear-birthYear;
    int agem;
    if (currentMonth < birthMonth){
        agey = agey -1;
        agem = 12 + currentMonth - birthMonth;

    }else{
        agem = currentMonth - birthMonth;
    }

    std::cout<<"\n\n\t\tYour Age is "<<agey<<" Years And "<<agem<<" Months ";

    return 0;
}
