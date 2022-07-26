// Auto-generated module | 2026-05-14T06:15:43.827996
#include <iostream>
#include <vector>

int compute_422() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
