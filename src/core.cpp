// Auto-generated module | 2026-05-11T22:14:35.270162
#include <iostream>
#include <vector>

int compute_719() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
