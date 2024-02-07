package main

// Auto-generated | 2026-05-11T22:25:38.892130
import "fmt"

func Process_625() int {
    base := 234
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_625())
}
