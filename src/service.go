package main

// Auto-generated | 2026-05-12T04:04:51.197806
import "fmt"

func Process_780() int {
    base := 21
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_780())
}
