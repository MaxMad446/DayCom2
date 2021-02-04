package main

// Auto-generated | 2026-05-12T20:37:51.660637
import "fmt"

func Process_102() int {
    base := 367
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
