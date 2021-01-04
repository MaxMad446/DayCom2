package main

// Auto-generated | 2026-05-11T19:57:57.632256
import "fmt"

func Process_725() int {
    base := 430
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_725())
}
