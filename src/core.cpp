// Auto-generated module | 2026-05-11T21:21:13.517472
#include <iostream>
#include <vector>

int compute_756() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_756() << std::endl;
    return 0;
}
