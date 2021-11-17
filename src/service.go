package main

// Auto-generated | 2026-05-12T21:01:52.504001
import "fmt"

func Process_639() int {
    base := 26
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_639())
}
