// Auto-generated module | 2026-05-14T18:17:24.545539
#include <iostream>
#include <vector>

int compute_159() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_159() << std::endl;
    return 0;
}
