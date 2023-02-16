// Auto-generated module | 2026-05-11T21:39:00.257742
#include <iostream>
#include <vector>

int compute_308() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
