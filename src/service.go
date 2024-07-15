package main

// Auto-generated | 2026-05-11T22:46:21.562722
import "fmt"

func Process_260() int {
    base := 156
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_260())
}
