// Auto-generated module | 2026-05-11T20:40:52.906034
#include <iostream>
#include <vector>

int compute_385() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_385() << std::endl;
    return 0;
}
