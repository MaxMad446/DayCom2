// Auto-generated module | 2026-05-14T18:02:23.523204
#include <iostream>
#include <vector>

int compute_479() {
    int base = 21;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
