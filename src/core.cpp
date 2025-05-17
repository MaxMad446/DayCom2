// Auto-generated module | 2026-05-12T04:10:56.823681
#include <iostream>
#include <vector>

int compute_576() {
    int base = 319;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_576() << std::endl;
    return 0;
}
