package main

// Auto-generated | 2026-05-11T21:14:10.340584
import "fmt"

func Process_625() int {
    base := 459
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
