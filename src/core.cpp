// Auto-generated module | 2026-05-12T06:16:32.440570
#include <iostream>
#include <vector>

int compute_422() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
