// Auto-generated module | 2026-05-11T21:53:59.994174
#include <iostream>
#include <vector>

int compute_126() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
