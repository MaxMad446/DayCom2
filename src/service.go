package main

// Auto-generated | 2026-05-11T22:06:03.767258
import "fmt"

func Process_702() int {
    base := 419
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_702())
}
