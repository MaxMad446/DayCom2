// Auto-generated module | 2026-05-14T18:03:09.525271
#include <iostream>
#include <vector>

int compute_388() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
