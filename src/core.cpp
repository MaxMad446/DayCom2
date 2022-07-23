// Auto-generated module | 2026-05-11T21:12:08.432342
#include <iostream>
#include <vector>

int compute_228() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_228() << std::endl;
    return 0;
}
