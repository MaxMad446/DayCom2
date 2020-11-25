package main

// Auto-generated | 2026-05-11T19:52:45.747989
import "fmt"

func Process_856() int {
    base := 311
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_856())
}
