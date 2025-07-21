package main

// Auto-generated | 2026-05-12T21:25:09.409158
import "fmt"

func Process_869() int {
    base := 256
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_869())
}
