// Auto-generated module | 2026-05-12T03:48:11.745116
#include <iostream>
#include <vector>

int compute_146() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_146() << std::endl;
    return 0;
}
