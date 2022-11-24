package main

// Auto-generated | 2026-05-11T21:28:12.080854
import "fmt"

func Process_810() int {
    base := 337
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_810())
}
