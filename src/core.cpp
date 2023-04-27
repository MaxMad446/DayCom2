// Auto-generated module | 2026-05-13T20:36:43.556385
#include <iostream>
#include <vector>

int compute_809() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
