// Auto-generated module | 2026-05-12T21:26:46.203905
#include <iostream>
#include <vector>

int compute_842() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
