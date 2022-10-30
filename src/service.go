package main

// Auto-generated | 2026-05-14T06:23:30.247403
import "fmt"

func Process_730() int {
    base := 265
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
