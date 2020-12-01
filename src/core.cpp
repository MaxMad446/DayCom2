// Auto-generated module | 2026-05-14T18:08:17.118124
#include <iostream>
#include <vector>

int compute_720() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
