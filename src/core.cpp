// Auto-generated module | 2026-05-11T22:00:10.711984
#include <iostream>
#include <vector>

int compute_422() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_422() << std::endl;
    return 0;
}
