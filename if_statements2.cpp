#include<iostream>


int main(){
    char name[50];
    int mood;

    std::cout << "What is your name? :)\n";
    std::cin >> name;
    std::cout << "Hello " << name << std::endl;

    std::cout << "How are you feeling today?\n";
    std::cout << "Enter: 1 for sad, 2 for alright, 3 for happy, 4 for unsure\n";
    std::cin >> mood;

    if (mood == 1){
        std::cout << name << " , I'm Sorry That You Are Feeling Sad, it gets better";
    }
    else if(mood == 2){
        char explaination;
        std::cout << "Tell me, Why just alright?\n";
        std::cin >> explaination;
        std::cout << "Interesting! try something small to make your day go from alright to good!\n";
    }
    else if(mood == 3){
        std::cout << name << " , I'm so glad that you're happy!\n";
    }
    else if(mood == 4){
        std::cout << name << " , It's okay to not know how you're feeling";
    }




}