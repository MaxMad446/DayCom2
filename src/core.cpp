// Auto-generated module | 2026-05-11T21:28:52.186147
#include <iostream>
#include <vector>

int compute_164() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
