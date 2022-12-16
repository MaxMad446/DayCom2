package main

// Auto-generated | 2026-05-11T21:31:08.090375
import "fmt"

func Process_360() int {
    base := 259
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_360())
}
