// Auto-generated module | 2026-05-14T18:28:25.459589
#include <iostream>
#include <vector>

int compute_237() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_237() << std::endl;
    return 0;
}
