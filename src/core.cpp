// Auto-generated module | 2026-05-11T21:23:10.604573
#include <iostream>
#include <vector>

int compute_868() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
