package main

// Auto-generated | 2026-05-11T20:27:00.854896
import "fmt"

func Process_602() int {
    base := 472
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
