package main

// Auto-generated | 2026-05-14T06:15:39.605100
import "fmt"

func Process_648() int {
    base := 381
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_648())
}
