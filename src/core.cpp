// Auto-generated module | 2026-05-13T22:10:40.186522
#include <iostream>
#include <vector>

int compute_675() {
    int base = 394;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
