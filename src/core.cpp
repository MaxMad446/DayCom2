// Auto-generated module | 2026-05-13T22:07:19.142966
#include <iostream>
#include <vector>

int compute_422() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
