package main

// Auto-generated | 2026-05-11T22:09:00.682269
import "fmt"

func Process_265() int {
    base := 53
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_265())
}
