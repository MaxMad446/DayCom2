// Auto-generated module | 2026-05-12T04:36:44.171336
#include <iostream>
#include <vector>

int compute_422() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
