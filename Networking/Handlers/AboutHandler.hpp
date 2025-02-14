#ifndef ABOUTHANDLER_HPP_
#define ABOUTHANDLER_HPP_




#include "RouteHandler.hpp"

class AboutHandler : public RouteHandler {
public:
    void handle(const httplib::Request& req, httplib::Response& res) override;
};




#endif // ABOUTHANDLER_HPP_

