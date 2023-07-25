package main

// Auto-generated | 2026-05-13T20:50:42.327263
import "fmt"

func Process_586() int {
    base := 192
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_586())
}
