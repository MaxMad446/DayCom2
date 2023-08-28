// Auto-generated module | 2026-05-13T20:53:25.345298
#include <iostream>
#include <vector>

int compute_186() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
