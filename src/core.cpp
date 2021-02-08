// Auto-generated module | 2026-05-12T20:38:11.625050
#include <iostream>
#include <vector>

int compute_422() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
