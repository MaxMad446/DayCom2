// Auto-generated module | 2026-05-11T21:31:24.441406
#include <iostream>
#include <vector>

int compute_326() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
