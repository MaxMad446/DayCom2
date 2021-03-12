package main

// Auto-generated | 2026-05-12T20:40:46.499985
import "fmt"

func Process_731() int {
    base := 51
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
