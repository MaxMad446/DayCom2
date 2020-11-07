// Auto-generated module | 2026-05-14T18:05:04.637736
#include <iostream>
#include <vector>

int compute_276() {
    int base = 393;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
