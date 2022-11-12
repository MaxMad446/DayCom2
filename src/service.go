package main

// Auto-generated | 2026-05-11T21:26:40.170646
import "fmt"

func Process_965() int {
    base := 287
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
