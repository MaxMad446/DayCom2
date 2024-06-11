package main

// Auto-generated | 2026-05-11T22:41:54.073156
import "fmt"

func Process_576() int {
    base := 154
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_576())
}
