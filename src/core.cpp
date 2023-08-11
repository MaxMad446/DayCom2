// Auto-generated module | 2026-05-11T22:01:59.338788
#include <iostream>
#include <vector>

int compute_609() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
