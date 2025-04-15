package main

// Auto-generated | 2026-05-12T04:06:34.820727
import "fmt"

func Process_141() int {
    base := 282
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_141())
}
