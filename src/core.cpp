// Auto-generated module | 2026-05-13T20:50:32.323783
#include <iostream>
#include <vector>

int compute_962() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
