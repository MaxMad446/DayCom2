// Auto-generated module | 2026-05-11T21:57:14.149807
#include <iostream>
#include <vector>

int compute_291() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
