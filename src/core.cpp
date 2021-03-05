// Auto-generated module | 2026-05-12T21:35:49.517421
#include <iostream>
#include <vector>

int compute_996() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_996() << std::endl;
    return 0;
}
