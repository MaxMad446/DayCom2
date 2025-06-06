// Auto-generated module | 2026-05-12T21:21:14.638399
#include <iostream>
#include <vector>

int compute_834() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
