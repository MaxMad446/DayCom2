// Auto-generated module | 2026-05-14T06:15:48.398519
#include <iostream>
#include <vector>

int compute_239() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
