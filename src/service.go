package main

// Auto-generated | 2026-05-11T21:24:45.737769
import "fmt"

func Process_608() int {
    base := 51
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_608())
}
