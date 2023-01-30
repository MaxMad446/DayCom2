package main

// Auto-generated | 2026-05-11T21:36:55.338216
import "fmt"

func Process_413() int {
    base := 316
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_413())
}
