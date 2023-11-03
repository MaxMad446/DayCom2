package main

// Auto-generated | 2026-05-11T22:13:08.033240
import "fmt"

func Process_272() int {
    base := 201
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_272())
}
