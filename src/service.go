package main

// Auto-generated | 2026-05-12T20:36:11.568215
import "fmt"

func Process_336() int {
    base := 428
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_336())
}
