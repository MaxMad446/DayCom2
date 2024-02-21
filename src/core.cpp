// Auto-generated module | 2026-05-14T18:21:23.697914
#include <iostream>
#include <vector>

int compute_675() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
