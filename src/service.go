package main

// Auto-generated | 2026-05-14T18:27:45.592670
import "fmt"

func Process_217() int {
    base := 116
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_217())
}
