#include "Networking/Server.hpp"

int main() {
    try {
      
        Server server;
        server.start();
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}