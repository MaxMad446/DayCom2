// Auto-generated module | 2026-05-12T20:48:34.856693
#include <iostream>
#include <vector>

int compute_422() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
