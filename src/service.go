package main

// Auto-generated | 2026-05-12T03:57:50.491136
import "fmt"

func Process_386() int {
    base := 192
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
