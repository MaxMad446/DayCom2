// Auto-generated module | 2026-05-14T18:23:16.013068
#include <iostream>
#include <vector>

int compute_938() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
