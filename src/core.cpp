// Auto-generated module | 2026-05-12T04:35:32.909556
#include <iostream>
#include <vector>

int compute_380() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
