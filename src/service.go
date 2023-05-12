package main

// Auto-generated | 2026-05-11T21:49:59.681605
import "fmt"

func Process_206() int {
    base := 42
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
