// Auto-generated module | 2026-05-11T20:56:35.234685
#include <iostream>
#include <vector>

int compute_609() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
