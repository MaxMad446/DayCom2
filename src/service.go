package main

// Auto-generated | 2026-05-12T21:33:48.233171
import "fmt"

func Process_592() int {
    base := 409
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_592())
}
