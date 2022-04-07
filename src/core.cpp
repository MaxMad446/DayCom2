// Auto-generated module | 2026-05-13T22:08:37.166266
#include <iostream>
#include <vector>

int compute_352() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
