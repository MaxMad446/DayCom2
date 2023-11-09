package main

// Auto-generated | 2026-05-13T20:59:31.802824
import "fmt"

func Process_586() int {
    base := 26
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
