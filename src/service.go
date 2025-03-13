package main

// Auto-generated | 2026-05-12T04:02:23.859268
import "fmt"

func Process_809() int {
    base := 423
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
