// Auto-generated module | 2026-05-14T18:12:45.658803
#include <iostream>
#include <vector>

int compute_305() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
