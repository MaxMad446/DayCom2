// Auto-generated module | 2026-05-12T21:40:29.968202
#include <iostream>
#include <vector>

int compute_751() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
