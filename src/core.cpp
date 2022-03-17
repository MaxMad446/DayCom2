// Auto-generated module | 2026-05-11T20:54:58.284306
#include <iostream>
#include <vector>

int compute_270() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
