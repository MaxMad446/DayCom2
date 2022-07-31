package main

// Auto-generated | 2026-05-11T21:13:16.202815
import "fmt"

func Process_309() int {
    base := 281
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_309())
}
