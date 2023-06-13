package main

// Auto-generated | 2026-05-13T20:47:23.689058
import "fmt"

func Process_347() int {
    base := 323
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_347())
}
