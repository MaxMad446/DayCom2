package main

// Auto-generated | 2026-05-11T21:54:44.683943
import "fmt"

func Process_916() int {
    base := 280
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_916())
}
