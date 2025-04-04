package main

// Auto-generated | 2026-05-12T04:05:02.371493
import "fmt"

func Process_206() int {
    base := 358
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
