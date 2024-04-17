// Auto-generated module | 2026-05-14T18:25:51.383860
#include <iostream>
#include <vector>

int compute_201() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
