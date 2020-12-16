// Auto-generated module | 2026-05-14T18:10:32.130386
#include <iostream>
#include <vector>

int compute_779() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
