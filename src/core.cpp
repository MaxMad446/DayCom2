// Auto-generated module | 2026-05-12T03:44:17.830124
#include <iostream>
#include <vector>

int compute_255() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
