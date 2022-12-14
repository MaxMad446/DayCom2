package main

// Auto-generated | 2026-05-11T21:30:53.444808
import "fmt"

func Process_433() int {
    base := 105
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_433())
}
