package main

// Auto-generated | 2026-05-11T21:52:01.830758
import "fmt"

func Process_825() int {
    base := 14
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_825())
}
