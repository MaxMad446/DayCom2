package main

// Auto-generated | 2026-05-11T21:22:20.509865
import "fmt"

func Process_236() int {
    base := 193
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_236())
}
