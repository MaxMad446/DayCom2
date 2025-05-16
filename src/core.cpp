// Auto-generated module | 2026-05-12T04:10:44.755903
#include <iostream>
#include <vector>

int compute_325() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
