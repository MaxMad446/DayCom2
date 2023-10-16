// Auto-generated module | 2026-05-11T22:10:41.087682
#include <iostream>
#include <vector>

int compute_514() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_514() << std::endl;
    return 0;
}
