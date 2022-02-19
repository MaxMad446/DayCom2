package main

// Auto-generated | 2026-05-11T20:51:41.475986
import "fmt"

func Process_965() int {
    base := 31
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_965())
}
