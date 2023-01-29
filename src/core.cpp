// Auto-generated module | 2026-05-11T21:36:48.881857
#include <iostream>
#include <vector>

int compute_503() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
