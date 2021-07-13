// Auto-generated module | 2026-05-12T20:51:00.944065
#include <iostream>
#include <vector>

int compute_975() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_975() << std::endl;
    return 0;
}
