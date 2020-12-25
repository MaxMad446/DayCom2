// Auto-generated module | 2026-05-12T20:02:59.277551
#include <iostream>
#include <vector>

int compute_659() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
