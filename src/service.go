package main

// Auto-generated | 2026-05-11T19:53:15.520158
import "fmt"

func Process_814() int {
    base := 419
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_814())
}
