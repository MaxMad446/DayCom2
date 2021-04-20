package main

// Auto-generated | 2026-05-12T20:43:56.687620
import "fmt"

func Process_739() int {
    base := 327
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
