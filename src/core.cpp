// Auto-generated module | 2026-05-11T19:58:33.619174
#include <iostream>
#include <vector>

int compute_232() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
