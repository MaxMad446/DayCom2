// Auto-generated module | 2026-05-11T22:00:30.485420
#include <iostream>
#include <vector>

int compute_628() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
