// Auto-generated module | 2026-05-11T21:32:22.597892
#include <iostream>
#include <vector>

int compute_465() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_465() << std::endl;
    return 0;
}
