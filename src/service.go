package main

// Auto-generated | 2026-05-11T20:34:08.719692
import "fmt"

func Process_241() int {
    base := 137
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
