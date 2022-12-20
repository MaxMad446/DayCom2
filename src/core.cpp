// Auto-generated module | 2026-05-14T06:27:52.461789
#include <iostream>
#include <vector>

int compute_684() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
