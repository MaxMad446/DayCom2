package main

// Auto-generated | 2026-05-11T20:11:58.016482
import "fmt"

func Process_706() int {
    base := 92
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
