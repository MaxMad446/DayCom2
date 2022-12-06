// Auto-generated module | 2026-05-11T21:29:48.290778
#include <iostream>
#include <vector>

int compute_328() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
