// Auto-generated module | 2026-05-12T03:45:49.830113
#include <iostream>
#include <vector>

int compute_553() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
