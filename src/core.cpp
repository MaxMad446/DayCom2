// Auto-generated module | 2026-05-14T06:11:51.285439
#include <iostream>
#include <vector>

int compute_388() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
