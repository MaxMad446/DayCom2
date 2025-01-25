// Auto-generated module | 2026-05-12T21:10:07.634628
#include <iostream>
#include <vector>

int compute_435() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
