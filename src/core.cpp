// Auto-generated module | 2026-05-14T18:13:36.836736
#include <iostream>
#include <vector>

int compute_585() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_585() << std::endl;
    return 0;
}
