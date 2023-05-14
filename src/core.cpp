// Auto-generated module | 2026-05-13T20:38:01.440719
#include <iostream>
#include <vector>

int compute_948() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
