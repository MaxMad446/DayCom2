// Auto-generated module | 2026-05-12T20:50:13.586165
#include <iostream>
#include <vector>

int compute_976() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_976() << std::endl;
    return 0;
}
