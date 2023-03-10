// Auto-generated module | 2026-05-11T21:41:52.478293
#include <iostream>
#include <vector>

int compute_308() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
