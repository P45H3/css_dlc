//
// Created by p45h3 on 2/14/24.
//

#ifndef CSS_C_PATTERN_HPP
#define CSS_C_PATTERN_HPP

#include <string>

struct lib_info {

};

class c_pattern {
public:
    c_pattern() = default;
    void * find_pattern(const std::string& image, const std::string& pattern);

private:
    void get_library_information();
};


#endif //CSS_C_PATTERN_HPP
