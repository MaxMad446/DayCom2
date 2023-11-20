// Auto-generated module | 2026-05-13T21:00:31.634004
#include <iostream>
#include <vector>

int compute_355() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
