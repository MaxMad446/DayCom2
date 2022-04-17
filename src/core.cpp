// Auto-generated module | 2026-05-13T22:09:27.444121
#include <iostream>
#include <vector>

int compute_763() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_763() << std::endl;
    return 0;
}
