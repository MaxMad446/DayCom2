// Auto-generated module | 2026-05-12T04:46:27.470492
#include <iostream>
#include <vector>

int compute_553() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
