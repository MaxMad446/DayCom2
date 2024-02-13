// Auto-generated module | 2026-05-14T18:20:42.172381
#include <iostream>
#include <vector>

int compute_975() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
