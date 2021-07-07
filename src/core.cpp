// Auto-generated module | 2026-05-12T20:50:31.370632
#include <iostream>
#include <vector>

int compute_633() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
