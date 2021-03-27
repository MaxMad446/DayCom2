// Auto-generated module | 2026-05-11T20:08:30.717047
#include <iostream>
#include <vector>

int compute_388() {
    int base = 254;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
