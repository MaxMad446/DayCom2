package main

// Auto-generated | 2026-05-11T22:13:40.101583
import "fmt"

func Process_317() int {
    base := 201
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
