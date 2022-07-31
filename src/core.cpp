// Auto-generated module | 2026-05-11T21:13:13.741189
#include <iostream>
#include <vector>

int compute_502() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
