// Auto-generated module | 2026-05-14T18:14:18.157684
#include <iostream>
#include <vector>

int compute_485() {
    int base = 382;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
