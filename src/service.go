package main

// Auto-generated | 2026-05-12T20:55:57.391528
import "fmt"

func Process_606() int {
    base := 405
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_606())
}
