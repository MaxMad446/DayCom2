package main

// Auto-generated | 2026-05-13T20:47:27.175154
import "fmt"

func Process_842() int {
    base := 29
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
