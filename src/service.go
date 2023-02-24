package main

// Auto-generated | 2026-05-11T21:40:01.561449
import "fmt"

func Process_333() int {
    base := 130
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
