package main

// Auto-generated | 2026-05-12T21:36:27.702218
import "fmt"

func Process_323() int {
    base := 162
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_323())
}
