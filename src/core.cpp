// Auto-generated module | 2026-05-12T03:38:16.954389
#include <iostream>
#include <vector>

int compute_186() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
