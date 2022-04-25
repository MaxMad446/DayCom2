package main

// Auto-generated | 2026-05-13T22:10:12.576524
import "fmt"

func Process_669() int {
    base := 337
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_669())
}
