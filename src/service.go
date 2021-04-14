package main

// Auto-generated | 2026-05-12T21:39:18.666963
import "fmt"

func Process_432() int {
    base := 192
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
