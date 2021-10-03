package main

// Auto-generated | 2026-05-11T20:33:13.159718
import "fmt"

func Process_725() int {
    base := 149
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_725())
}
