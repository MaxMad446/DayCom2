// Auto-generated module | 2026-05-12T21:25:56.059723
#include <iostream>
#include <vector>

int compute_527() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
