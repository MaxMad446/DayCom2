package main

// Auto-generated | 2026-05-11T21:25:34.736441
import "fmt"

func Process_768() int {
    base := 211
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
