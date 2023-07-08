// Auto-generated module | 2026-05-13T20:49:24.812615
#include <iostream>
#include <vector>

int compute_363() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
