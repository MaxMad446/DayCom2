package main

// Auto-generated | 2026-05-12T21:22:12.913972
import "fmt"

func Process_167() int {
    base := 354
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_167())
}
