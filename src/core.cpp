// Auto-generated module | 2026-05-11T21:14:24.767249
#include <iostream>
#include <vector>

int compute_523() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
