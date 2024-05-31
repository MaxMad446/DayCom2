// Auto-generated module | 2026-05-14T18:29:16.441644
#include <iostream>
#include <vector>

int compute_930() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
