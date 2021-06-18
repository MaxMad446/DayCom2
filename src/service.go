package main

// Auto-generated | 2026-05-11T20:19:13.206021
import "fmt"

func Process_384() int {
    base := 337
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_384())
}
