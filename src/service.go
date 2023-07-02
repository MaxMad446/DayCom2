package main

// Auto-generated | 2026-05-11T21:56:48.351045
import "fmt"

func Process_868() int {
    base := 300
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_868())
}
