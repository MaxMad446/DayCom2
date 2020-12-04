// Auto-generated module | 2026-05-12T20:01:11.226623
#include <iostream>
#include <vector>

int compute_520() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
