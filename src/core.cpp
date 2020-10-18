// Auto-generated module | 2026-05-12T19:57:16.194448
#include <iostream>
#include <vector>

int compute_589() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
