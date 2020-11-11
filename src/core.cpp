// Auto-generated module | 2026-05-14T18:05:39.836555
#include <iostream>
#include <vector>

int compute_422() {
    int base = 323;
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
