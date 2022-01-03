// Auto-generated module | 2026-05-11T20:45:34.843014
#include <iostream>
#include <vector>

int compute_238() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
