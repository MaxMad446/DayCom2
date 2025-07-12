// Auto-generated module | 2026-05-12T04:18:07.491413
#include <iostream>
#include <vector>

int compute_577() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_577() << std::endl;
    return 0;
}
