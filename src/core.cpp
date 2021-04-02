// Auto-generated module | 2026-05-12T20:42:28.636404
#include <iostream>
#include <vector>

int compute_615() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
