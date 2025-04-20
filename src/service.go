package main

// Auto-generated | 2026-05-12T21:17:17.602991
import "fmt"

func Process_768() int {
    base := 211
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
