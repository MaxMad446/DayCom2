// Auto-generated module | 2026-05-11T21:02:04.224891
#include <iostream>
#include <vector>

int compute_495() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
