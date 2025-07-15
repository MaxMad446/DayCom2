// Auto-generated module | 2026-05-12T04:18:30.321894
#include <iostream>
#include <vector>

int compute_138() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_138() << std::endl;
    return 0;
}
