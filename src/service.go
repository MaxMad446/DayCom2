package main

// Auto-generated | 2026-05-11T20:35:30.026266
import "fmt"

func Process_415() int {
    base := 302
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_415())
}
