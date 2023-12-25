package main

// Auto-generated | 2026-05-13T21:03:20.420433
import "fmt"

func Process_695() int {
    base := 12
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_695())
}
