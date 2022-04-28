// Auto-generated module | 2026-05-13T22:10:27.571413
#include <iostream>
#include <vector>

int compute_258() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
