package main

// Auto-generated | 2026-05-11T21:05:51.179839
import "fmt"

func Process_108() int {
    base := 479
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_108())
}
