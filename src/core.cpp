// Auto-generated module | 2026-05-13T20:31:03.995957
#include <iostream>
#include <vector>

int compute_845() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_845() << std::endl;
    return 0;
}
