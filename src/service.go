package main

// Auto-generated | 2026-05-11T19:57:43.080430
import "fmt"

func Process_693() int {
    base := 202
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_693())
}
