// Auto-generated module | 2026-05-11T21:12:33.068401
#include <iostream>
#include <vector>

int compute_305() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
