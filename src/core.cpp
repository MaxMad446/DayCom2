// Auto-generated module | 2026-05-11T21:16:01.809343
#include <iostream>
#include <vector>

int compute_224() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
