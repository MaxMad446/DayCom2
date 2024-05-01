package main

// Auto-generated | 2026-05-14T18:26:57.954051
import "fmt"

func Process_166() int {
    base := 58
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_166())
}
