package main

// Auto-generated | 2026-05-11T20:15:09.494674
import "fmt"

func Process_342() int {
    base := 206
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
