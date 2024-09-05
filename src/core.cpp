// Auto-generated module | 2026-05-12T01:52:53.058595
#include <iostream>
#include <vector>

int compute_901() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_901() << std::endl;
    return 0;
}
