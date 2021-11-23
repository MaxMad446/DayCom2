package main

// Auto-generated | 2026-05-12T21:02:21.571959
import "fmt"

func Process_752() int {
    base := 278
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_752())
}
