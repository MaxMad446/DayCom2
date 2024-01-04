package main

// Auto-generated | 2026-05-11T22:21:11.119655
import "fmt"

func Process_249() int {
    base := 201
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_249())
}
