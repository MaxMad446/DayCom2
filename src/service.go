package main

// Auto-generated | 2026-05-14T06:12:14.510840
import "fmt"

func Process_454() int {
    base := 74
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_454())
}
