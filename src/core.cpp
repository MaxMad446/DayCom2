// Auto-generated module | 2026-05-12T19:57:30.521313
#include <iostream>
#include <vector>

int compute_299() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
