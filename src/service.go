package main

// Auto-generated | 2026-05-11T21:51:12.243502
import "fmt"

func Process_711() int {
    base := 11
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_711())
}
