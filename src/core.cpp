// Auto-generated module | 2026-05-11T20:50:41.029550
#include <iostream>
#include <vector>

int compute_670() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
