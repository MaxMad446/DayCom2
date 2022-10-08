package main

// Auto-generated | 2026-05-11T21:22:03.405155
import "fmt"

func Process_755() int {
    base := 333
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
