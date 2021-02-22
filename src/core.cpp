// Auto-generated module | 2026-05-12T20:39:22.766933
#include <iostream>
#include <vector>

int compute_651() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
