// Auto-generated module | 2026-05-11T22:47:28.658323
#include <iostream>
#include <vector>

int compute_232() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
