package main

// Auto-generated | 2026-05-11T22:00:59.292447
import "fmt"

func Process_438() int {
    base := 93
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
