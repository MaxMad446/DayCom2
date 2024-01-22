// Auto-generated module | 2026-05-14T18:18:53.376099
#include <iostream>
#include <vector>

int compute_316() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
