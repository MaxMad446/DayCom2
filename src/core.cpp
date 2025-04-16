// Auto-generated module | 2026-05-12T21:16:57.572863
#include <iostream>
#include <vector>

int compute_105() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
