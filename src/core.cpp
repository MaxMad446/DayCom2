// Auto-generated module | 2026-05-12T03:54:31.013455
#include <iostream>
#include <vector>

int compute_408() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
