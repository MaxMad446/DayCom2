package main

// Auto-generated | 2026-05-12T03:59:21.953515
import "fmt"

func Process_887() int {
    base := 15
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_887())
}
