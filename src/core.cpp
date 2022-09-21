// Auto-generated module | 2026-05-14T06:20:17.348230
#include <iostream>
#include <vector>

int compute_170() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
