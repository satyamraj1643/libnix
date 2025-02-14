#ifndef ROUTEHANDLER_HPP_
#define ROUTEHANDLER_HPP_


#include "httplib.h"
class RouteHandler {

    public:
        virtual ~RouteHandler() = default;

        virtual void handle(const httplib::Request &req, httplib::Response & res) = 0;

};



#endif // ROUTEHANDLER_HPP_