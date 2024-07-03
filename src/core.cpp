// Auto-generated module | 2026-05-11T22:44:49.127155
#include <iostream>
#include <vector>

int compute_735() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
