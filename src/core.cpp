// Auto-generated module | 2026-05-11T19:56:16.726627
#include <iostream>
#include <vector>

int compute_202() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
