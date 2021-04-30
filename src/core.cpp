// Auto-generated module | 2026-05-12T20:44:44.351803
#include <iostream>
#include <vector>

int compute_169() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
