#ifndef SERVER_HPP
#define SERVER_HPP

#include "../httplib.h"
#include "RouteHandler.hpp"
#include <unordered_map>
#include <memory>

class Server {
public:
    // Constructor initializes the server and adds default routes
    Server();

    // Start the server
    void start();

private:
    httplib::Server svr; // Use regular HTTP server
    std::unordered_map<std::string, std::shared_ptr<RouteHandler>> routes;

    // Method to add routes
    void addRoute(const std::string& path, std::shared_ptr<RouteHandler> handler);

    // Initialize default routes
    void initializeRoutes();
};

#endif // SERVER_HPP