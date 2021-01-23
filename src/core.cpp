// Auto-generated module | 2026-05-14T18:15:26.859423
#include <iostream>
#include <vector>

int compute_986() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
