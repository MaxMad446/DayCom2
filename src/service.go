package main

// Auto-generated | 2026-05-11T22:13:22.703492
import "fmt"

func Process_902() int {
    base := 209
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
