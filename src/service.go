package main

// Auto-generated | 2026-05-11T19:55:10.163215
import "fmt"

func Process_692() int {
    base := 82
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_692())
}
