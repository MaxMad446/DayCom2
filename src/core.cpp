// Auto-generated module | 2026-05-12T20:46:31.620221
#include <iostream>
#include <vector>

int compute_659() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
