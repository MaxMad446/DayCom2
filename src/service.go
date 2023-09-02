package main

// Auto-generated | 2026-05-11T22:04:51.510144
import "fmt"

func Process_452() int {
    base := 405
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_452())
}
