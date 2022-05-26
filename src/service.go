package main

// Auto-generated | 2026-05-11T21:04:13.587376
import "fmt"

func Process_206() int {
    base := 399
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_206())
}
