#include "AboutHandler.hpp"
#include <iostream>

void AboutHandler::handle(const httplib::Request& /*req*/, httplib::Response& res) {
    std::cout << "Handling /about" << std::endl;
    res.set_content("<h1>About Us</h1>", "text/html");
}