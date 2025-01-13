package main

// Auto-generated | 2026-05-12T21:09:06.005978
import "fmt"

func Process_314() int {
    base := 276
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_314())
}
