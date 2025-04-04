package main

// Auto-generated | 2026-05-12T21:15:51.631294
import "fmt"

func Process_221() int {
    base := 14
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_221())
}
