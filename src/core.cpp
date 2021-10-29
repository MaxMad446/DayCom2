// Auto-generated module | 2026-05-11T20:36:44.641435
#include <iostream>
#include <vector>

int compute_755() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_755() << std::endl;
    return 0;
}
