package main

// Auto-generated | 2026-05-11T20:30:46.325832
import "fmt"

func Process_739() int {
    base := 72
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
