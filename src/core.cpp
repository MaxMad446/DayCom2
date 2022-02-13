// Auto-generated module | 2026-05-11T20:50:52.157059
#include <iostream>
#include <vector>

int compute_408() {
    int base = 198;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
