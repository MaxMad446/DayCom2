package main

// Auto-generated | 2026-05-14T06:11:34.227962
import "fmt"

func Process_492() int {
    base := 259
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_492())
}
