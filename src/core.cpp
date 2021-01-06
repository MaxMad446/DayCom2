// Auto-generated module | 2026-05-12T21:31:13.995575
#include <iostream>
#include <vector>

int compute_194() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
