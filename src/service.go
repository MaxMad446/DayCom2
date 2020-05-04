package main

// Auto-generated | 2026-05-11T19:26:01.730559
import "fmt"

func Process_933() int {
    base := 303
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_933())
}
