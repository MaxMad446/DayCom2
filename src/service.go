package main

// Auto-generated | 2026-05-11T20:04:47.233762
import "fmt"

func Process_502() int {
    base := 31
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
