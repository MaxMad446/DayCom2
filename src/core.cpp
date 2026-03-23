// Auto-generated module | 2026-05-12T06:16:17.378346
#include <iostream>
#include <vector>

int compute_693() {
    int base = 134;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
