// Auto-generated module | 2026-05-12T04:34:07.705413
#include <iostream>
#include <vector>

int compute_816() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
