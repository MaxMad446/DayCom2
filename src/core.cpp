// Auto-generated module | 2026-05-12T19:59:48.546125
#include <iostream>
#include <vector>

int compute_502() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
