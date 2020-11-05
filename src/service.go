package main

// Auto-generated | 2026-05-11T19:50:08.190066
import "fmt"

func Process_173() int {
    base := 109
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
