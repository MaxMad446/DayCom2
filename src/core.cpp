// Auto-generated module | 2026-05-11T22:12:31.074413
#include <iostream>
#include <vector>

int compute_609() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
