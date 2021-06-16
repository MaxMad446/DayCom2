package main

// Auto-generated | 2026-05-11T20:18:59.724569
import "fmt"

func Process_500() int {
    base := 266
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
