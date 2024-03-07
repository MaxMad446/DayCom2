// Auto-generated module | 2026-05-14T18:22:36.329369
#include <iostream>
#include <vector>

int compute_421() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
