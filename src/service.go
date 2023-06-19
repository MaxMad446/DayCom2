package main

// Auto-generated | 2026-05-11T21:55:09.459146
import "fmt"

func Process_439() int {
    base := 70
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_439())
}
