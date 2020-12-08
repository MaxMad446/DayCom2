// Auto-generated module | 2026-05-12T20:01:26.803215
#include <iostream>
#include <vector>

int compute_421() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
