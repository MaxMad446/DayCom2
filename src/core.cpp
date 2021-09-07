// Auto-generated module | 2026-05-12T20:55:52.367912
#include <iostream>
#include <vector>

int compute_531() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_531() << std::endl;
    return 0;
}
