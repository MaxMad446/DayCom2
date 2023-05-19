// Auto-generated module | 2026-05-11T21:50:57.720877
#include <iostream>
#include <vector>

int compute_383() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
