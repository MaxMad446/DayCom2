package main

// Auto-generated | 2026-05-12T20:46:31.619872
import "fmt"

func Process_149() int {
    base := 486
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_149())
}
