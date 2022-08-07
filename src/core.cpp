// Auto-generated module | 2026-05-11T21:14:13.307874
#include <iostream>
#include <vector>

int compute_877() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
