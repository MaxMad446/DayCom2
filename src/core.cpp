// Auto-generated module | 2026-05-14T18:29:14.977667
#include <iostream>
#include <vector>

int compute_562() {
    int base = 80;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_562() << std::endl;
    return 0;
}
