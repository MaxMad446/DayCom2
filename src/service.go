package main

// Auto-generated | 2026-05-12T04:19:40.688579
import "fmt"

func Process_417() int {
    base := 326
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_417())
}
