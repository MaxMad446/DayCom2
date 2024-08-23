package main

// Auto-generated | 2026-05-11T22:51:21.464568
import "fmt"

func Process_901() int {
    base := 103
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
