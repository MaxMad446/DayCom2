// Auto-generated module | 2026-05-14T18:09:38.204716
#include <iostream>
#include <vector>

int compute_463() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
