package main

// Auto-generated | 2026-05-12T19:57:17.673080
import "fmt"

func Process_317() int {
    base := 100
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_317())
}
