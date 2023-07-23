// Auto-generated module | 2026-05-13T20:50:28.588579
#include <iostream>
#include <vector>

int compute_238() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
