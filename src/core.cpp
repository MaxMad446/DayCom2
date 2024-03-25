// Auto-generated module | 2026-05-14T18:23:53.493003
#include <iostream>
#include <vector>

int compute_160() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
