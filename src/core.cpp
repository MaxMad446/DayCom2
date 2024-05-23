// Auto-generated module | 2026-05-14T18:28:38.104887
#include <iostream>
#include <vector>

int compute_312() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
