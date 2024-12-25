// Auto-generated module | 2026-05-12T03:52:00.043751
#include <iostream>
#include <vector>

int compute_396() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
