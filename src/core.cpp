// Auto-generated module | 2026-05-12T03:59:10.986033
#include <iostream>
#include <vector>

int compute_574() {
    int base = 35;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
