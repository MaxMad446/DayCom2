package main

// Auto-generated | 2026-05-11T21:55:59.268653
import "fmt"

func Process_252() int {
    base := 339
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
