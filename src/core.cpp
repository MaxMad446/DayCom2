// Auto-generated module | 2026-05-13T22:01:17.751336
#include <iostream>
#include <vector>

int compute_852() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
