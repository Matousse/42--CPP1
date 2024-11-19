#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

Harl::Level Harl::levels[4] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};

void Harl::debug(void) {
    std::cout << "I've been debugging get_next_line for 42 hours straight... Why does this BUFFER_SIZE thing keep giving me headaches? I'm pretty sure I've read more about static variables than I've slept in the past week!" << std::endl;
}

void Harl::info(void) {
    std::cout << "Did you know that get_next_line is supposedly a 'simple' project? SIMPLE? I've rewritten my malloc protection 17 times and my linked list still leaks like the campus coffee machine!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "Listen, I've been here since the pool and I still don't understand why we can't just use getline()! My evaluator yesterday told me my code was 'too complicated'. TOO COMPLICATED? It's get_next_line, not get_next_easy!" << std::endl;
}

void Harl::error(void) {
    std::cout << "THIS IS UNACCEPTABLE! My get_next_line just segfaulted during evaluation AGAIN! I want to speak to Moulinette RIGHT NOW! And don't you dare tell me to check my split function one more time!" << std::endl;
}

void Harl::complain(std::string level) {
    int i = 0;
    while (i < 4 && levels[i].name != level)
        i++;

    switch (i) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*levels[0].function)();
            std::cout << std::endl;
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*levels[1].function)();
            std::cout << std::endl;
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*levels[2].function)();
            std::cout << std::endl;
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*levels[3].function)();
            std::cout << std::endl;
            break;
        default:
            std::cout << "[ Blablabla ... ]" << std::endl;
    }
}
