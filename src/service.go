package main

// Auto-generated | 2026-05-11T21:44:30.804728
import "fmt"

func Process_695() int {
    base := 483
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_695())
}
