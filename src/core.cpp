// Auto-generated module | 2026-05-14T06:11:23.209509
#include <iostream>
#include <vector>

int compute_432() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
