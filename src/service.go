package main

// Auto-generated | 2026-05-11T22:22:29.340912
import "fmt"

func Process_518() int {
    base := 206
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_518())
}
