package main

// Auto-generated | 2026-05-12T04:33:48.295502
import "fmt"

func Process_477() int {
    base := 259
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_477())
}
