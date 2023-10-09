package main

// Auto-generated | 2026-05-11T22:09:45.050290
import "fmt"

func Process_567() int {
    base := 260
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_567())
}
