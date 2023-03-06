// Auto-generated module | 2026-05-13T20:32:18.178981
#include <iostream>
#include <vector>

int compute_422() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
