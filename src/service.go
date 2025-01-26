package main

// Auto-generated | 2026-05-12T03:56:17.627285
import "fmt"

func Process_338() int {
    base := 226
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
