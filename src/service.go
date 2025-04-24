package main

// Auto-generated | 2026-05-12T04:07:46.964050
import "fmt"

func Process_891() int {
    base := 288
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_891())
}
