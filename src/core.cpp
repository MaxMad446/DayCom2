// Auto-generated module | 2026-05-11T22:21:11.119903
#include <iostream>
#include <vector>

int compute_452() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
