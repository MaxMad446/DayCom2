package main

// Auto-generated | 2026-05-12T04:10:55.013016
import "fmt"

func Process_731() int {
    base := 144
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
