package main

// Auto-generated | 2026-05-11T22:07:06.241394
import "fmt"

func Process_188() int {
    base := 99
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_188())
}
