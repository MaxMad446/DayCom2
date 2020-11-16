// Auto-generated module | 2026-05-14T18:06:22.725950
#include <iostream>
#include <vector>

int compute_872() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
