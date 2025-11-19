// Auto-generated module | 2026-05-12T04:35:24.924482
#include <iostream>
#include <vector>

int compute_965() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_965() << std::endl;
    return 0;
}
