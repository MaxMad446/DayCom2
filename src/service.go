package main

// Auto-generated | 2026-05-11T19:54:10.396032
import "fmt"

func Process_986() int {
    base := 36
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_986())
}
