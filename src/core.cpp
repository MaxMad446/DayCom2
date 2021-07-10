// Auto-generated module | 2026-05-12T20:50:45.973716
#include <iostream>
#include <vector>

int compute_570() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
