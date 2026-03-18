// Auto-generated module | 2026-05-12T04:51:43.561883
#include <iostream>
#include <vector>

int compute_892() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
