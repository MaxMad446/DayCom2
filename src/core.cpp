// Auto-generated module | 2026-05-12T04:07:14.882541
#include <iostream>
#include <vector>

int compute_422() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
