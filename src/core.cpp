// Auto-generated module | 2026-05-11T22:41:52.765852
#include <iostream>
#include <vector>

int compute_271() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_271() << std::endl;
    return 0;
}
