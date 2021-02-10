// Auto-generated module | 2026-05-11T20:02:50.890185
#include <iostream>
#include <vector>

int compute_150() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_150() << std::endl;
    return 0;
}
