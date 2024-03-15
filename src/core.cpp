// Auto-generated module | 2026-05-14T18:23:09.915402
#include <iostream>
#include <vector>

int compute_688() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_688() << std::endl;
    return 0;
}
