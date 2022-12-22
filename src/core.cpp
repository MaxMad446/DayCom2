// Auto-generated module | 2026-05-14T06:28:04.835305
#include <iostream>
#include <vector>

int compute_675() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
