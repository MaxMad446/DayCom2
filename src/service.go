package main

// Auto-generated | 2026-05-11T22:05:05.349523
import "fmt"

func Process_545() int {
    base := 401
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_545())
}
