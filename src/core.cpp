// Auto-generated module | 2026-05-14T18:08:27.239967
#include <iostream>
#include <vector>

int compute_430() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
