// Auto-generated module | 2026-05-14T06:27:55.172992
#include <iostream>
#include <vector>

int compute_258() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
