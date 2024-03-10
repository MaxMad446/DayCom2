// Auto-generated module | 2026-05-14T18:22:49.285166
#include <iostream>
#include <vector>

int compute_259() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
