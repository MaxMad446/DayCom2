package main

// Auto-generated | 2026-05-12T21:17:08.181724
import "fmt"

func Process_142() int {
    base := 164
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_142())
}
