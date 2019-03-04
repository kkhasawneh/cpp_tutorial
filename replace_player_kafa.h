#include <string>

class ReplacePlayer_kafa {
public:
    // Constructor
    ReplacePlayer_kafa(const std::string replace,const std::string replaced_by);

    //Destructor
    ~ReplacePlayer_kafa();

    std::string Play(const std::string& input);

private:
    const std::string replace;
    std::string replaced_by;
};