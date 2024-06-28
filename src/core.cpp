// Auto-generated module | 2026-05-11T22:44:10.598113
#include <iostream>
#include <vector>

int compute_422() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
