package main

// Auto-generated | 2026-05-11T21:56:19.520345
import "fmt"

func Process_596() int {
    base := 60
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_596())
}
