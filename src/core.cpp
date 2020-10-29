// Auto-generated module | 2026-05-14T18:03:44.834377
#include <iostream>
#include <vector>

int compute_827() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
