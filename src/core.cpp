// Auto-generated module | 2026-05-11T21:15:47.418359
#include <iostream>
#include <vector>

int compute_889() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
