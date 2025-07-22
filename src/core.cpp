// Auto-generated module | 2026-05-12T21:25:19.816346
#include <iostream>
#include <vector>

int compute_243() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
