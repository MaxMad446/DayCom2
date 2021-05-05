// Auto-generated module | 2026-05-12T21:41:05.218267
#include <iostream>
#include <vector>

int compute_305() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
