#include <iostream>
#include <string>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main()
{

    json j_object = { {"first", 1}, {"second", 2} };
    json j_array = { 1, 2, 4, 8, 16 };
    for (auto& x : j_object.items())
    {
        std::cout << "key: " << x.key() << ", value: " << x.value() << '\n';
    }


    for (auto& x : j_array.items())

    {
        std::cout << "key: " << x.key() << ", value: " << x.value() << '\n';
    }


}
