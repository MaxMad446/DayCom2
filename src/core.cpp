// Auto-generated module | 2026-05-12T21:37:12.476362
#include <iostream>
#include <vector>

int compute_836() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
