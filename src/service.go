package main

// Auto-generated | 2026-05-11T20:16:39.576103
import "fmt"

func Process_450() int {
    base := 348
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_450())
}
