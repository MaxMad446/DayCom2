package main

// Auto-generated | 2026-05-12T04:48:11.675972
import "fmt"

func Process_432() int {
    base := 30
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_432())
}
