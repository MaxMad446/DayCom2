package main

// Auto-generated | 2026-05-14T06:27:45.646934
import "fmt"

func Process_860() int {
    base := 174
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_860())
}
