// Auto-generated module | 2026-05-14T18:17:26.135040
#include <iostream>
#include <vector>

int compute_834() {
    int base = 333;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
