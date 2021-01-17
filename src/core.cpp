// Auto-generated module | 2026-05-14T18:14:29.222902
#include <iostream>
#include <vector>

int compute_746() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
