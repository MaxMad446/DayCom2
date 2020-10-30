package main

// Auto-generated | 2026-05-12T19:58:19.618524
import "fmt"

func Process_710() int {
    base := 302
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
