// Auto-generated module | 2026-05-12T04:27:59.423178
#include <iostream>
#include <vector>

int compute_840() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
