// Auto-generated module | 2026-05-14T18:02:29.161872
#include <iostream>
#include <vector>

int compute_265() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_265() << std::endl;
    return 0;
}
