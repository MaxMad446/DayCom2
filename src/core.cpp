// Auto-generated module | 2026-05-11T19:53:06.038827
#include <iostream>
#include <vector>

int compute_609() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
