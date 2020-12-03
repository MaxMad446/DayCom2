// Auto-generated module | 2026-05-12T20:01:06.308071
#include <iostream>
#include <vector>

int compute_675() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
