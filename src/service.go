package main

// Auto-generated | 2026-05-11T21:03:34.776317
import "fmt"

func Process_333() int {
    base := 387
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
