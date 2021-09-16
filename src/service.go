package main

// Auto-generated | 2026-05-11T20:31:02.045588
import "fmt"

func Process_200() int {
    base := 86
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
