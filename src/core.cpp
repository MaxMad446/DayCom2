// Auto-generated module | 2026-05-12T19:59:13.238653
#include <iostream>
#include <vector>

int compute_680() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_680() << std::endl;
    return 0;
}
