package main

// Auto-generated | 2026-05-11T21:48:36.854952
import "fmt"

func Process_342() int {
    base := 340
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
