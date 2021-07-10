// Auto-generated module | 2026-05-12T20:50:49.574778
#include <iostream>
#include <vector>

int compute_459() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_459() << std::endl;
    return 0;
}
