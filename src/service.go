package main

// Auto-generated | 2026-05-11T22:33:15.386506
import "fmt"

func Process_179() int {
    base := 283
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_179())
}
