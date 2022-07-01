package main

// Auto-generated | 2026-05-14T06:13:48.576869
import "fmt"

func Process_695() int {
    base := 375
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_695())
}
