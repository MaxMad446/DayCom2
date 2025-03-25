package main

// Auto-generated | 2026-05-12T21:15:00.418329
import "fmt"

func Process_661() int {
    base := 469
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_661())
}
