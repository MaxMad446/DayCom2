package main

// Auto-generated | 2026-05-12T21:37:10.989337
import "fmt"

func Process_660() int {
    base := 197
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_660())
}
