package main

// Auto-generated | 2026-05-11T21:31:04.562686
import "fmt"

func Process_210() int {
    base := 169
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
