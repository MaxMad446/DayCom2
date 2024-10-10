// Auto-generated module | 2026-05-12T03:42:03.885946
#include <iostream>
#include <vector>

int compute_283() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
