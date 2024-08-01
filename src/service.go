package main

// Auto-generated | 2026-05-11T22:48:34.367629
import "fmt"

func Process_329() int {
    base := 329
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_329())
}
