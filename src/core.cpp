// Auto-generated module | 2026-05-14T06:15:58.472122
#include <iostream>
#include <vector>

int compute_524() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
