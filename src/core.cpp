// Auto-generated module | 2026-05-11T19:59:44.902905
#include <iostream>
#include <vector>

int compute_530() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_530() << std::endl;
    return 0;
}
