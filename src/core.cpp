// Auto-generated module | 2026-05-11T22:14:41.893217
#include <iostream>
#include <vector>

int compute_334() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
