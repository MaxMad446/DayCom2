// Auto-generated module | 2026-05-11T21:53:41.071561
#include <iostream>
#include <vector>

int compute_734() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_734() << std::endl;
    return 0;
}
