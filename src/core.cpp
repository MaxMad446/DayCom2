// Auto-generated module | 2026-05-14T18:19:59.375281
#include <iostream>
#include <vector>

int compute_812() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_812() << std::endl;
    return 0;
}
