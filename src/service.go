package main

// Auto-generated | 2026-05-12T04:46:37.393603
import "fmt"

func Process_173() int {
    base := 30
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_173())
}
