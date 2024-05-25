// Auto-generated module | 2026-05-14T18:28:43.671031
#include <iostream>
#include <vector>

int compute_591() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
