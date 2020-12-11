// Auto-generated module | 2026-05-14T18:09:45.375053
#include <iostream>
#include <vector>

int compute_256() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
