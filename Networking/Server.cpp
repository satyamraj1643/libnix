#include "Server.hpp"
#include "Handlers/HomeHandler.hpp"
#include "Handlers/AboutHandler.hpp"
#include <iostream>

// Constructor
Server::Server() {
    // Initialize default routes
    initializeRoutes();

    // Add a generic fallback for undefined routes
    svr.Get(".*", [](const httplib::Request&, httplib::Response& res) {
        res.status = 404;
        res.set_content("<h1>404 Not Found</h1>", "text/html");
    });
}

// Method to add routes
void Server::addRoute(const std::string& path, std::shared_ptr<RouteHandler> handler) {
    routes[path] = handler;
    svr.Get(path.c_str(), [handler](const httplib::Request& req, httplib::Response& res) {
        handler->handle(req, res);
    });
}

// Initialize default routes
void Server::initializeRoutes() {
    // Add default routes
    addRoute("/", std::make_shared<HomeHandler>());
    addRoute("/about", std::make_shared<AboutHandler>());
}

// Start the server
void Server::start() {
    std::cout << "HTTP Server started at http://localhost:8053" << std::endl;
    svr.listen("0.0.0.0", 8053);
}