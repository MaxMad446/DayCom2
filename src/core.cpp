// Auto-generated module | 2026-05-12T04:41:48.584636
#include <iostream>
#include <vector>

int compute_560() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_560() << std::endl;
    return 0;
}
