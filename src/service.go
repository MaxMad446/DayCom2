package main

// Auto-generated | 2026-05-11T20:49:23.034536
import "fmt"

func Process_907() int {
    base := 281
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_907())
}
