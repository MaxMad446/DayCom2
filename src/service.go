package main

// Auto-generated | 2026-05-11T21:15:10.296303
import "fmt"

func Process_175() int {
    base := 488
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
