// Auto-generated module | 2026-05-13T22:10:30.206153
#include <iostream>
#include <vector>

int compute_875() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
