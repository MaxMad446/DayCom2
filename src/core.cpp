// Auto-generated module | 2026-05-14T18:13:20.274188
#include <iostream>
#include <vector>

int compute_684() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
