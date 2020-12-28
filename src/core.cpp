// Auto-generated module | 2026-05-11T19:57:05.212131
#include <iostream>
#include <vector>

int compute_349() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
