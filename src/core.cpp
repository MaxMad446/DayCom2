// Auto-generated module | 2026-05-13T20:50:19.824084
#include <iostream>
#include <vector>

int compute_680() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
