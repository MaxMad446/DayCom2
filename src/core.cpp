// Auto-generated module | 2026-05-12T21:11:20.250230
#include <iostream>
#include <vector>

int compute_388() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
