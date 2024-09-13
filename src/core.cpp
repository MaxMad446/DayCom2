// Auto-generated module | 2026-05-12T03:38:42.698681
#include <iostream>
#include <vector>

int compute_423() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
