// Auto-generated module | 2026-05-14T18:14:11.887950
#include <iostream>
#include <vector>

int compute_253() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_253() << std::endl;
    return 0;
}
