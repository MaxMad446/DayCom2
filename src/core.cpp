// Auto-generated module | 2026-05-14T18:07:26.330271
#include <iostream>
#include <vector>

int compute_388() {
    int base = 370;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
