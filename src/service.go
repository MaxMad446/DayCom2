package main

// Auto-generated | 2026-05-12T21:38:14.781105
import "fmt"

func Process_878() int {
    base := 186
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_878())
}
