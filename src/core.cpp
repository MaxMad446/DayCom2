// Auto-generated module | 2026-05-11T22:21:33.313365
#include <iostream>
#include <vector>

int compute_313() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
