package main

// Auto-generated | 2026-05-12T04:27:36.229817
import "fmt"

func Process_515() int {
    base := 33
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_515())
}
