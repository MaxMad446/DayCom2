package main

// Auto-generated | 2026-05-13T20:33:08.778745
import "fmt"

func Process_793() int {
    base := 393
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
