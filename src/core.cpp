// Auto-generated module | 2026-05-14T18:26:34.026582
#include <iostream>
#include <vector>

int compute_846() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
