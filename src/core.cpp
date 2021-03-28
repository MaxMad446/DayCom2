// Auto-generated module | 2026-05-12T21:37:46.032456
#include <iostream>
#include <vector>

int compute_659() {
    int base = 120;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
