// Auto-generated module | 2026-05-11T20:02:07.641697
#include <iostream>
#include <vector>

int compute_380() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_380() << std::endl;
    return 0;
}
