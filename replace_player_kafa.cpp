
#include "replace_player_kafa.h"


bool my_replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}




// Constructor
ReplacePlayer_kafa::ReplacePlayer_kafa(const std::string replace, const std::string replaced_by) :

 replace(replace), replaced_by(replaced_by) {}

//Destructor
ReplacePlayer_kafa::~ReplacePlayer_kafa() {}

std::string ReplacePlayer_kafa::Play(const std::string& input) {
    std::string output = input;
           
replaced_by="___kafa_was_here_:)";
    
        //std::replace(output.begin(), output.end(), replace, replaced_by);
        my_replace (output,replace, replaced_by);
    return output;
}
