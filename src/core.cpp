// Auto-generated module | 2026-05-14T06:20:58.097931
#include <iostream>
#include <vector>

int compute_262() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
