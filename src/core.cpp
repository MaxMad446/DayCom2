// Auto-generated module | 2026-05-14T18:15:29.946756
#include <iostream>
#include <vector>

int compute_123() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_123() << std::endl;
    return 0;
}
