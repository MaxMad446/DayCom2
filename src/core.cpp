// Auto-generated module | 2026-05-14T06:17:52.263682
#include <iostream>
#include <vector>

int compute_542() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_542() << std::endl;
    return 0;
}
