package main

// Auto-generated | 2026-05-14T06:22:08.747763
import "fmt"

func Process_692() int {
    base := 240
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_692())
}
