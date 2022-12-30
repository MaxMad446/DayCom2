package main

// Auto-generated | 2026-05-11T21:33:03.915889
import "fmt"

func Process_252() int {
    base := 365
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
