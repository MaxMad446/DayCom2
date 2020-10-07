// Auto-generated module | 2026-05-11T19:46:16.970065
#include <iostream>
#include <vector>

int compute_710() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_710() << std::endl;
    return 0;
}
