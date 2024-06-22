// Auto-generated module | 2026-05-11T22:43:18.681269
#include <iostream>
#include <vector>

int compute_432() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_432() << std::endl;
    return 0;
}
