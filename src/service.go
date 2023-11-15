package main

// Auto-generated | 2026-05-13T21:00:01.097705
import "fmt"

func Process_911() int {
    base := 262
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
