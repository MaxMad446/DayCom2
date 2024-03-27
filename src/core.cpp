// Auto-generated module | 2026-05-14T18:24:05.462082
#include <iostream>
#include <vector>

int compute_935() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_935() << std::endl;
    return 0;
}
