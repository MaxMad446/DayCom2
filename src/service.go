package main

// Auto-generated | 2026-05-13T21:02:07.413728
import "fmt"

func Process_401() int {
    base := 155
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
