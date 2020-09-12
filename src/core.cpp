// Auto-generated module | 2026-05-11T19:42:54.518850
#include <iostream>
#include <vector>

int compute_633() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
