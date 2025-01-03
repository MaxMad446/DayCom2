package main

// Auto-generated | 2026-05-12T03:53:19.665284
import "fmt"

func Process_898() int {
    base := 470
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_898())
}
