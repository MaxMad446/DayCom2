package main

// Auto-generated | 2026-05-12T21:30:48.986795
import "fmt"

func Process_755() int {
    base := 282
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
