package main

// Auto-generated | 2026-05-12T21:33:05.989803
import "fmt"

func Process_809() int {
    base := 253
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
