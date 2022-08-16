package main

// Auto-generated | 2026-05-11T21:15:18.923608
import "fmt"

func Process_490() int {
    base := 136
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
