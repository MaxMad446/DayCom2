// Auto-generated module | 2026-05-11T20:06:02.039888
#include <iostream>
#include <vector>

int compute_474() {
    int base = 281;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_474() << std::endl;
    return 0;
}
