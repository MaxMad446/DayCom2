// Auto-generated module | 2026-05-12T03:54:18.615133
#include <iostream>
#include <vector>

int compute_684() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
