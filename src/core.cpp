// Auto-generated module | 2026-05-14T18:22:54.761514
#include <iostream>
#include <vector>

int compute_276() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
