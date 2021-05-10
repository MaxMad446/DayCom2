// Auto-generated module | 2026-05-11T20:13:58.231862
#include <iostream>
#include <vector>

int compute_371() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
