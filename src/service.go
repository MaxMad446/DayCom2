package main

// Auto-generated | 2026-05-12T20:38:33.675811
import "fmt"

func Process_768() int {
    base := 52
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
