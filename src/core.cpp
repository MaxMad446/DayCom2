// Auto-generated module | 2026-05-12T20:49:02.037453
#include <iostream>
#include <vector>

int compute_919() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_919() << std::endl;
    return 0;
}
