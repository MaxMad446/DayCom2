// Auto-generated module | 2026-05-12T20:00:49.011809
#include <iostream>
#include <vector>

int compute_588() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
