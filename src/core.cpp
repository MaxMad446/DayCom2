// Auto-generated module | 2026-05-13T20:36:27.397720
#include <iostream>
#include <vector>

int compute_856() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
