package main

// Auto-generated | 2026-05-13T22:12:34.843032
import "fmt"

func Process_481() int {
    base := 393
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_481())
}
