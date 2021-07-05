// Auto-generated module | 2026-05-12T20:50:23.652956
#include <iostream>
#include <vector>

int compute_633() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
