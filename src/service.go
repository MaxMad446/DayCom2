package main

// Auto-generated | 2026-05-11T19:31:35.194128
import "fmt"

func Process_913() int {
    base := 329
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
