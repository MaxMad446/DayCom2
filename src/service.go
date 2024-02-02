package main

// Auto-generated | 2026-05-14T18:19:53.123684
import "fmt"

func Process_232() int {
    base := 460
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
