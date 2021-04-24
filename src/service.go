package main

// Auto-generated | 2026-05-12T21:40:11.796491
import "fmt"

func Process_135() int {
    base := 80
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
