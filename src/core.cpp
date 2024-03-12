// Auto-generated module | 2026-05-14T18:22:57.690241
#include <iostream>
#include <vector>

int compute_479() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
