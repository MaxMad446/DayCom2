// Auto-generated module | 2026-05-11T19:32:16.431929
#include <iostream>
#include <vector>

int compute_681() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_681() << std::endl;
    return 0;
}
