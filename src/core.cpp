// Auto-generated module | 2026-05-11T21:28:48.428416
#include <iostream>
#include <vector>

int compute_280() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_280() << std::endl;
    return 0;
}
