// Auto-generated module | 2026-05-14T06:22:16.082120
#include <iostream>
#include <vector>

int compute_365() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
