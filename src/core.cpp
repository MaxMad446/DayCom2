// Auto-generated module | 2026-05-11T22:09:12.260312
#include <iostream>
#include <vector>

int compute_609() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
