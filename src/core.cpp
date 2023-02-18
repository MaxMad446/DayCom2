// Auto-generated module | 2026-05-11T21:39:18.335588
#include <iostream>
#include <vector>

int compute_462() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
