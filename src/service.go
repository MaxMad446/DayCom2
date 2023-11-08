package main

// Auto-generated | 2026-05-13T20:59:29.385699
import "fmt"

func Process_333() int {
    base := 73
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_333())
}
