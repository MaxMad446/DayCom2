// Auto-generated module | 2026-05-12T20:45:19.977964
#include <iostream>
#include <vector>

int compute_962() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
