package main

// Auto-generated | 2026-05-13T22:12:40.275373
import "fmt"

func Process_913() int {
    base := 26
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
