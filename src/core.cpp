// Auto-generated module | 2026-05-14T18:10:35.883627
#include <iostream>
#include <vector>

int compute_832() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
