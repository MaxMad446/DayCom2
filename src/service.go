package main

// Auto-generated | 2026-05-11T20:45:50.909656
import "fmt"

func Process_320() int {
    base := 251
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
