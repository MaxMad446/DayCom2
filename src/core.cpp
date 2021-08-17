// Auto-generated module | 2026-05-12T20:53:54.011455
#include <iostream>
#include <vector>

int compute_589() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
