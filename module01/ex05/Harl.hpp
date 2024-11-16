#include <string>
#include <iostream>

class Harl
{
private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    typedef void (Harl::*FunctionPointer)(void);

    struct Level {
        std::string name;
        FunctionPointer function;
    };
    
    static Level levels[4];

public:
    Harl();
    ~Harl();

    void complain( std::string level );
};

