package main

// Auto-generated | 2026-05-12T04:09:35.212018
import "fmt"

func Process_727() int {
    base := 343
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_727())
}
