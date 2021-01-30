// Auto-generated module | 2026-05-11T20:01:17.382236
#include <iostream>
#include <vector>

int compute_308() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
