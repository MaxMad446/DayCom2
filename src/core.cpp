// Auto-generated module | 2026-05-14T18:06:01.830987
#include <iostream>
#include <vector>

int compute_327() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_327() << std::endl;
    return 0;
}
