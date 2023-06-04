package main

// Auto-generated | 2026-05-11T21:53:15.047976
import "fmt"

func Process_825() int {
    base := 86
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_825())
}
