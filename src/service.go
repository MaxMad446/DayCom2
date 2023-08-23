package main

// Auto-generated | 2026-05-11T22:03:29.446856
import "fmt"

func Process_793() int {
    base := 10
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
