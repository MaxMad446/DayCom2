// Auto-generated module | 2026-05-13T22:00:50.769196
#include <iostream>
#include <vector>

int compute_239() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
