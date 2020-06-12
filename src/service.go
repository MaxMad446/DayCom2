package main

// Auto-generated | 2026-05-11T19:30:47.497414
import "fmt"

func Process_333() int {
    base := 46
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
