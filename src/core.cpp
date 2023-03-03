// Auto-generated module | 2026-05-11T21:41:02.933802
#include <iostream>
#include <vector>

int compute_192() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
