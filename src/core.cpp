// Auto-generated module | 2026-05-12T03:50:41.676608
#include <iostream>
#include <vector>

int compute_873() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
