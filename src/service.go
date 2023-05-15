package main

// Auto-generated | 2026-05-11T21:50:26.258450
import "fmt"

func Process_766() int {
    base := 209
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_766())
}
