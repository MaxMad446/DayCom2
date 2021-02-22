package main

// Auto-generated | 2026-05-12T21:34:56.852953
import "fmt"

func Process_357() int {
    base := 276
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_357())
}
