// Auto-generated module | 2026-05-14T18:18:04.115459
#include <iostream>
#include <vector>

int compute_253() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
