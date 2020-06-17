// Auto-generated module | 2026-05-11T19:31:30.610245
#include <iostream>
#include <vector>

int compute_388() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
