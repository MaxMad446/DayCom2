// Auto-generated module | 2026-05-13T22:12:55.403246
#include <iostream>
#include <vector>

int compute_819() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
