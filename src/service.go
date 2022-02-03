package main

// Auto-generated | 2026-05-11T20:49:31.253823
import "fmt"

func Process_889() int {
    base := 110
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_889())
}
