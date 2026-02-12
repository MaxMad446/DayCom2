package main

// Auto-generated | 2026-05-12T04:47:05.109916
import "fmt"

func Process_996() int {
    base := 341
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_996())
}
