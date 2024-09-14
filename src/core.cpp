// Auto-generated module | 2026-05-12T03:38:48.900621
#include <iostream>
#include <vector>

int compute_342() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
