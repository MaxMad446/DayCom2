// Auto-generated module | 2026-05-14T18:26:48.284171
#include <iostream>
#include <vector>

int compute_875() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
