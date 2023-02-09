package main

// Auto-generated | 2026-05-11T21:38:11.627879
import "fmt"

func Process_213() int {
    base := 257
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
