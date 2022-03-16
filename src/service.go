package main

// Auto-generated | 2026-05-13T22:06:40.574031
import "fmt"

func Process_533() int {
    base := 50
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_533())
}
