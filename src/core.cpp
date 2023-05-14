// Auto-generated module | 2026-05-13T20:38:00.122424
#include <iostream>
#include <vector>

int compute_598() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
