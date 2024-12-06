package main

// Auto-generated | 2026-05-12T03:49:25.904462
import "fmt"

func Process_560() int {
    base := 64
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
