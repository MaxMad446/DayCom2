// Auto-generated module | 2026-05-11T20:51:12.108309
#include <iostream>
#include <vector>

int compute_147() {
    int base = 94;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
