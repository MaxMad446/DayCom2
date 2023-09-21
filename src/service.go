package main

// Auto-generated | 2026-05-11T22:07:14.376638
import "fmt"

func Process_814() int {
    base := 60
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_814())
}
