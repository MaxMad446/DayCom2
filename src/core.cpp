// Auto-generated module | 2026-05-11T21:06:43.732984
#include <iostream>
#include <vector>

int compute_259() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
