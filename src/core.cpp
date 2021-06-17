// Auto-generated module | 2026-05-11T20:19:09.529941
#include <iostream>
#include <vector>

int compute_675() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
