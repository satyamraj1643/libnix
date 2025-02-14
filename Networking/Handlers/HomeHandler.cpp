#include "HomeHandler.hpp"

#include <iostream>

void HomeHandler::handle(const httplib::Request &req,  httplib::Response &res)
{
     std::cout << "Handling /" << std::endl;
    res.set_content("<h1>Welcome to Home</h1>", "text/html");
}
