// Auto-generated module | 2026-05-13T21:03:44.957951
#include <iostream>
#include <vector>

int compute_977() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
