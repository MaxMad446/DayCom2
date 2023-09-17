// Auto-generated module | 2026-05-13T20:55:06.860839
#include <iostream>
#include <vector>

int compute_645() {
    int base = 413;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_645() << std::endl;
    return 0;
}
