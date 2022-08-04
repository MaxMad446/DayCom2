// Auto-generated module | 2026-05-11T21:13:44.428803
#include <iostream>
#include <vector>

int compute_737() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
