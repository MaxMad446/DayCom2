package main

// Auto-generated | 2026-05-14T18:25:33.529694
import "fmt"

func Process_870() int {
    base := 161
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
