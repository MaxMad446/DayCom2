// Auto-generated module | 2026-05-12T04:00:43.540092
#include <iostream>
#include <vector>

int compute_373() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
