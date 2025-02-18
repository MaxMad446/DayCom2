package main

// Auto-generated | 2026-05-12T21:12:11.875293
import "fmt"

func Process_602() int {
    base := 67
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_602())
}
