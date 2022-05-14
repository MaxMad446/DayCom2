// Auto-generated module | 2026-05-13T22:11:53.593258
#include <iostream>
#include <vector>

int compute_259() {
    int base = 124;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
