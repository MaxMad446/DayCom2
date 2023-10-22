// Auto-generated module | 2026-05-13T20:58:02.498391
#include <iostream>
#include <vector>

int compute_856() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
