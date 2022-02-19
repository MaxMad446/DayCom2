// Auto-generated module | 2026-05-13T22:04:38.695665
#include <iostream>
#include <vector>

int compute_387() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_387() << std::endl;
    return 0;
}
