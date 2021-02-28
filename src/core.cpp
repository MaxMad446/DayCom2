// Auto-generated module | 2026-05-12T20:39:48.270963
#include <iostream>
#include <vector>

int compute_333() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_333() << std::endl;
    return 0;
}
