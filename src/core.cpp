// Auto-generated module | 2026-05-14T18:24:36.980387
#include <iostream>
#include <vector>

int compute_439() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
