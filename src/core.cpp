// Auto-generated module | 2026-05-12T04:34:04.696017
#include <iostream>
#include <vector>

int compute_962() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
