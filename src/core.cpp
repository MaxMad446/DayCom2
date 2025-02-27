// Auto-generated module | 2026-05-12T21:13:00.977959
#include <iostream>
#include <vector>

int compute_765() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
