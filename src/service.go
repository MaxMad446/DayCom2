package main

// Auto-generated | 2026-05-12T04:48:20.776443
import "fmt"

func Process_661() int {
    base := 360
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_661())
}
