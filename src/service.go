package main

// Auto-generated | 2026-05-11T22:35:23.335381
import "fmt"

func Process_393() int {
    base := 35
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_393())
}
