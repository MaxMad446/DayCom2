// Auto-generated module | 2026-05-12T21:28:05.847217
#include <iostream>
#include <vector>

int compute_892() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
