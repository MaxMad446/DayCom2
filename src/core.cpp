// Auto-generated module | 2026-05-11T21:10:44.097545
#include <iostream>
#include <vector>

int compute_609() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
