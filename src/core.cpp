// Auto-generated module | 2026-05-11T22:00:35.392209
#include <iostream>
#include <vector>

int compute_826() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
