package main

// Auto-generated | 2026-05-12T03:39:49.694117
import "fmt"

func Process_924() int {
    base := 167
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_924())
}
