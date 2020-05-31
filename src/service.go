package main

// Auto-generated | 2026-05-11T19:29:08.842784
import "fmt"

func Process_877() int {
    base := 490
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_877())
}
