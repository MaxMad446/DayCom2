// Auto-generated module | 2026-05-11T22:01:40.280018
#include <iostream>
#include <vector>

int compute_827() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
