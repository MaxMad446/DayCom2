package main

// Auto-generated | 2026-05-11T21:06:20.662932
import "fmt"

func Process_582() int {
    base := 256
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_582())
}
