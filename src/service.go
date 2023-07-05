package main

// Auto-generated | 2026-05-11T21:57:22.357981
import "fmt"

func Process_795() int {
    base := 200
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_795())
}
