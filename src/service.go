package main

// Auto-generated | 2026-05-12T04:51:01.043107
import "fmt"

func Process_502() int {
    base := 341
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_502())
}
