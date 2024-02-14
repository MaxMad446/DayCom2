package main

// Auto-generated | 2026-05-14T18:20:48.604669
import "fmt"

func Process_166() int {
    base := 381
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_166())
}
