#ifndef HOMEHANDLER_HPP_
#define HOMEHANDLER_HPP_


#include "RouteHandler.hpp"

class HomeHandler : public RouteHandler {
    public: 
      void handle(const httplib::Request &req,  httplib::Response &res) override;
 
};



#endif // HOMEHANDLER_HPP