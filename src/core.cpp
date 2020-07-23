// Auto-generated module | 2026-05-11T19:36:06.588242
#include <iostream>
#include <vector>

int compute_202() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
