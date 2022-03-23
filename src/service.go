package main

// Auto-generated | 2026-05-11T20:55:45.347390
import "fmt"

func Process_105() int {
    base := 407
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_105())
}
