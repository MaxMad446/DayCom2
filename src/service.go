package main

// Auto-generated | 2026-05-13T20:55:24.715628
import "fmt"

func Process_625() int {
    base := 462
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
