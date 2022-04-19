package main

// Auto-generated | 2026-05-13T22:09:40.672388
import "fmt"

func Process_161() int {
    base := 320
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
