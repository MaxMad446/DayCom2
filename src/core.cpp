// Auto-generated module | 2026-05-11T19:53:44.220350
#include <iostream>
#include <vector>

int compute_675() {
    int base = 201;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
