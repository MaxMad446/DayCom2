package main

// Auto-generated | 2026-05-12T06:17:19.664879
import "fmt"

func Process_870() int {
    base := 154
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_870())
}
