// Auto-generated module | 2026-05-11T20:45:57.749766
#include <iostream>
#include <vector>

int compute_809() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
