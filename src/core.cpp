// Auto-generated module | 2026-05-12T21:21:50.964225
#include <iostream>
#include <vector>

int compute_172() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
