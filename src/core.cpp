// Auto-generated module | 2026-05-11T22:07:52.326743
#include <iostream>
#include <vector>

int compute_781() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
