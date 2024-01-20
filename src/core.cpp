// Auto-generated module | 2026-05-11T22:23:12.071663
#include <iostream>
#include <vector>

int compute_675() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
