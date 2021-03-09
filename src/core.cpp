// Auto-generated module | 2026-05-12T20:40:30.323070
#include <iostream>
#include <vector>

int compute_827() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
