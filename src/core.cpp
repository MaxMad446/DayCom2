// Auto-generated module | 2026-05-11T21:15:32.884612
#include <iostream>
#include <vector>

int compute_533() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
