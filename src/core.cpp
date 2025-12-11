// Auto-generated module | 2026-05-12T04:38:21.513295
#include <iostream>
#include <vector>

int compute_258() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
